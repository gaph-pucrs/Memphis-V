GREEN	= \033[0;32m
NC		= \033[0m # No Color

SRCDIR = .

SRCS = $(wildcard $(SRCDIR)/*.c)
TARGETS = $(patsubst %.c,%.txt,$(SRCS))
ELFS = $(patsubst %.c,%.elf,$(SRCS))
LSTS = $(patsubst %.c,%.lst,$(SRCS))

CC = riscv64-elf-gcc
OBJDUMP = riscv64-elf-objdump
OBJCOPY = riscv64-elf-objcopy
SIZE    = riscv64-elf-size
READELF = riscv64-elf-readelf

LIBDIR = ../../libmemphis
UTILDIR = ../../libmutils

CFLAGS	+= -march=rv32i -mabi=ilp32 -Os -fdata-sections -ffunction-sections -flto -Wall -std=c11 -I$(INCDIR) -I../../../libmutils/src/include -I../../../libmemphis/src/include
LDFLAGS += -L../../../lib --specs=nano.specs -T ../common/custom.ld -Wl,--gc-sections,-flto,-Ttext=0 -u _getpid -march=rv32i -mabi=ilp32 -lmemphis -lmutils

all: $(TARGETS) $(ELFS)

$(SRCDIR)/%.txt: $(SRCDIR)/i%.bin $(SRCDIR)/d%.bin $(SRCDIR)/%.elf
	@printf "${GREEN}Dumping to %s ...${NC}\n" "$(patsubst %.txt,%.bin,$@)"
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$1}' > $@
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$2}' >> $@
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$3}' >> $@
	@$(READELF) -h $(patsubst %.txt,%.elf,$@) | awk '/Entry point/ { printf "%08x\n", strtonum($$4) }' >> $@
	@hexdump -v -e '1/4 "%08x" "\n"' i$(patsubst %.txt,%.bin,$@) >> $@
	@hexdump -v -e '1/4 "%08x" "\n"' d$(patsubst %.txt,%.bin,$@) >> $@

$(SRCDIR)/d%.bin: $(SRCDIR)/%.elf
	@printf "${GREEN}Generating binary %s ...${NC}\n" "$@"
	@$(OBJCOPY) -j .rodata -j .eh_frame -j .init_array -j .fini_array -j .data -j .sdata -O binary $< $@

$(SRCDIR)/i%.bin: $(SRCDIR)/%.elf
	@printf "${GREEN}Generating binary %s ...${NC}\n" "$@"
	@$(OBJCOPY) -j .text -O binary $< $@

$(SRCDIR)/%.elf: $(SRCDIR)/%.o
	@printf "${GREEN}Linking %s ...${NC}\n" "$@"
	@$(CC) -o $@ $^ $(LDFLAGS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	@printf "${GREEN}Compiling %s ...${NC}\n" "$<"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@printf "Cleaning up\n"
	@rm -rf *.o
	@rm -rf *.bin
	@rm -rf *.map
	@rm -rf *.lst
	@rm -rf *.txt
	@rm -rf *.elf

.PHONY: clean
