# matmul_rows

Multiplicação de matrizes inteiras C = A × B (`int32_t`, N × N) no modelo mestre–workers, com decomposição por linhas e número de workers W definido por um gerador.

Autores: Lucas Cunha e Guilherme Frick (PUCRS).

## Funcionamento

1. O `master` envia a cada worker um bloco de N/W linhas de A e a matriz B inteira.
2. Cada worker calcula o seu bloco de C e o devolve.
3. O `master` monta C e compara com o resultado esperado (golden) calculado pelo gerador.

Saída das tarefas (`memphis_get_tick()`, 1 tick = 1 ciclo):

```
TICKS send=<envio> recv=<recebimento> total=<total>     (master)
RESULT OK N=<N> W=<W> erros=0                          (master)
TICKS recv=<espera+recebimento> comp=<cálculo> send=<devolução>   (workers)
```

## Arquivos

| Arquivo | Conteúdo |
|---|---|
| `generator/generator.py` | Gera `config.yaml`, `data.h`, `master.c` e `worker0.c` a `workerW-1.c` |
| `experiments/` | yaml de testcase, aplicações e cenários usados nos experimentos |
| `config.yaml` | CTG: `master` com sucessores `worker0` a `workerW-1` |
| `data.h` | N, W, linhas por worker, flag de debug e as matrizes A, B e golden (só o master as usa) |
| `master.c` | Tarefa mestre |
| `worker_impl.h` | Lógica única dos workers; cada `workerX.c` contém só `#include "worker_impl.h"` |
| `matmul.h` | Códigos de retorno, mensagens de erro e de debug |

A versão no repositório foi gerada com N = 6 e W = 3.

## Gerador

```sh
cd applications/matmul_rows/generator
python3 generator.py --workers W --size N [--seed S] [--debug] [--page-kb KB]
```

- N precisa ser divisível por W.
- A e B têm valores aleatórios de 0 a 99 (semente padrão 1); o golden é calculado com numpy, se disponível.
- O gerador recusa N cujo resultado estoure `int32_t`.
- `--debug` liga as mensagens de depuração (aumenta o tempo medido).
- `--page-kb` só serve para o aviso de memória: informe o `page_size_data_KB` do testcase.

## Memória

Dados por tarefa, em KB:

| N | master | worker (W = 1) |
|---|---|---|
| 32 | 16 | 12 |
| 64 | 64 | 48 |
| 128 | 256 | 192 |
| 256 | 1024 | 768 |

Para N ≥ 64 aumente a página no testcase e use o mesmo valor para instruções e dados (página de dados maior que a de instruções trava a simulação):

```yaml
hw:
  page_size_inst_KB: 1024
  page_size_data_KB: 1024
```

Para N = 256, use 2048 KB nos dois campos.

## Simular

`applications.yaml`:

```yaml
apps:
  - name: matmul_rows
```

`scenario.yaml`:

```yaml
management:
  - task: mapper_task
    static_mapping: [0,0]
apps:
  - name: matmul_rows
```

```sh
mint testcase testcase.yaml
mint applications testcase applications.yaml
mint scenario testcase scenario.yaml
mint simulate testcase/scenario --nogui
grep -h 'RESULT\|ERRO\|TICKS' testcase/scenario/log/*.txt
```

## Experimentos

`experiments/` tem os yaml usados na caracterização: malha 5 × 5, 1 tarefa por PE, páginas de 1024 KB (2048 KB para N = 256), mapeamento estático com o master em 2x2 e os workers nos PEs mais próximos.

| Arquivo | Conteúdo |
|---|---|
| `testcase.yaml` | malha 5 × 5, `tasks_per_PE: 1`, `page_size_inst_KB = page_size_data_KB = 1024` |
| `testcase_2048.yaml` | igual, com páginas de 2048 KB (N = 256) |
| `applications.yaml` | aplicação `matmul_rows` |
| `scenario_wW.yaml` | mapeamento para W = 1, 2, 4, 8 e 16 |

Bateria N ∈ {32, 64, 128} × W ∈ {1, 2, 4, 8, 16}, a partir de uma pasta de simulação com o ambiente da Memphis-V carregado (`APP` aponta para esta pasta):

```sh
APP=<Memphis-V>/applications/matmul_rows
cp $APP/experiments/testcase.yaml $APP/experiments/applications.yaml .
mint testcase testcase.yaml
for N in 32 64 128; do for W in 1 2 4 8 16; do
  python3 $APP/generator/generator.py --workers $W --size $N --page-kb 1024 &&
  cp $APP/experiments/scenario_w$W.yaml scenario.yaml &&
  rm -rf testcase/applications/* &&
  mint applications testcase applications.yaml &&
  mint scenario testcase scenario.yaml &&
  mint simulate testcase/scenario --nogui &&
  rm -rf res_N${N}_W$W && cp -r testcase/scenario res_N${N}_W$W
done; done
grep -h 'RESULT\|ERRO' res_N*/log/*.txt
```

N = 256, em outra pasta de simulação (W = 1 leva cerca de 3,3 h):

```sh
APP=<Memphis-V>/applications/matmul_rows
cp $APP/experiments/testcase_2048.yaml testcase.yaml
cp $APP/experiments/applications.yaml .
mint testcase testcase.yaml
for W in 1 2 4 8 16; do
  python3 $APP/generator/generator.py --workers $W --size 256 --page-kb 2048 &&
  cp $APP/experiments/scenario_w$W.yaml scenario.yaml &&
  rm -rf testcase/applications/* &&
  mint applications testcase applications.yaml &&
  mint scenario testcase scenario.yaml &&
  mint simulate testcase/scenario --nogui &&
  rm -rf res_N256_W$W && cp -r testcase/scenario res_N256_W$W
done
grep -h 'RESULT\|ERRO' res_N256_*/log/*.txt
```

O `rm -rf testcase/applications/*` evita que workers de uma configuração anterior continuem na cópia da aplicação. No zsh, esse `rm` pede confirmação (responda `y`); para rodar sem interrupção, execute o laço com `bash`.

Com páginas de 2048 KB, algumas compilações do simulador (`testcase/Phivers/sim/phivers`) terminaram com `Segmentation fault` logo ao iniciar; reaproveitar um `phivers` que funcionou, gerado do mesmo testcase, resolveu.

## Códigos de retorno

Em caso de falha a tarefa imprime `ERRO <código> (<nome>): ...` e retorna o código:

| Código | Nome | Causa |
|---|---|---|
| 0 | `MATMUL_OK` | sucesso |
| 1 | `MATMUL_ERR_ALLOC` | `malloc` devolveu `NULL` |
| 2 | `MATMUL_ERR_SEND` | `memphis_send` falhou |
| 3 | `MATMUL_ERR_RECV` | `memphis_receive` falhou ou tamanho errado |
| 4 | `MATMUL_ERR_RESULT` | C diferente do golden |
