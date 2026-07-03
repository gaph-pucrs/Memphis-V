#ifndef __CNN_COMMON_VECTOR_H__
#define __CNN_COMMON_VECTOR_H__

#include <stdlib.h>
#include <string.h>

#include "debug.h"

typedef int type;

//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void pad (
    const int H,
    const int W,
    const int C,
    const type in[],
    type out[]
) {
    int idx_in, idx_out;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            for (int k = 0; k < C; k++)
            {
                idx_in = k + j*C + i*C*W;
                idx_out = k + (j+1)*C + (i+1)*C*(W+2);

                out[idx_out] = in[idx_in];
            }
        }
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void sum_bias(const int C, type buf[], const type b[])
{   
    size_t vl = 0;
    int total;

    type *out_addr = (type *) buf;
    type *bias_addr = (type *) b;

    for (total = C; total > 0; total -= vl)
    {
        __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
        __asm__ volatile("vle32.v v16, (%0)" :: "r"(out_addr));
        __asm__ volatile("vle32.v  v8, (%0)" :: "r"(bias_addr));
        __asm__ volatile("vadd.vv v16, v16, v8");
    //--------------------- ReLU ---------------------------------
        __asm__ volatile("vmslt.vi v0, v16, 0");
        __asm__ volatile("vmerge.vim v16, v16, 0, v0");
    //------------------------------------------------------------
        __asm__ volatile("vse32.v v16, (%0)" :: "r"(out_addr));

        bias_addr += vl;
        out_addr += vl;
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void relu(const int C, type buf[])
{
    // merged with sum_bias()
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void int_handler (const int C, type buf[])
{
    // can be merged with sum_bias() as well to avoid VLOAD and VSTORE calls
    size_t vl = 0;
    int total;

    type *out_addr = (type *) buf;

    for (total = C; total > 0; total -= vl)
    {
        __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
        __asm__ volatile("vle32.v v16, (%0)" :: "r"(out_addr));
        __asm__ volatile("vsra.vi v16, v16, 13");
        __asm__ volatile("vse32.v v16, (%0)" :: "r"(out_addr));

        out_addr += vl;
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void avg_pool_chunk (
    const type *in,     // (0, 0)
    const int W_in,     
    const int C_in,             
    type out[]               
) {
    size_t vl = 0;
    int total;
    type *in_addr = (type *) in;
    type *offset;
    type *out_addr = (type *) out;

    for (total = C_in; total > 0; total -= vl)
    {
        offset = in_addr;
        __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
        __asm__ volatile("vle32.v v16, (%0)" :: "r"(offset)); // (0, 0)
        
        offset += C_in;
        __asm__ volatile("vle32.v v24, (%0)" :: "r"(offset)); // (0, 1)
        __asm__ volatile("vadd.vv v16, v16, v24");

        offset += (W_in-1)*C_in;
        __asm__ volatile("vle32.v v24, (%0)" :: "r"(offset)); // (1, 0)
        __asm__ volatile("vadd.vv v16, v16, v24");
        
        offset += C_in;
        __asm__ volatile("vle32.v v24, (%0)" :: "r"(offset)); // (1, 1)
        __asm__ volatile("vadd.vv v16, v16, v24");
        
        __asm__ volatile("vsra.vi v16, v16, 2");
        __asm__ volatile("vse32.v v16, (%0)" :: "r"(out_addr));

        out_addr += vl;
        in_addr += vl;
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void concat4_chunk (
    const int C_in,
    const type x[],
    const type y1[],
    const type y2[],
    const type y3[],
    type out[]
) {
    memcpy(out                ,  x, C_in*sizeof(type));
    memcpy(out + C_in         , y1,   12*sizeof(type));
    memcpy(out + C_in + 12    , y2,    6*sizeof(type));
    memcpy(out + C_in + 12 + 6, y3,    6*sizeof(type));
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void conv_chunk (
    const int H_in,
    const int W_in, // W_in + p
    const int C_in,
    const type in[], // offset = x + y
    const type w[],
    const int H_out,
    const int W_out,
    const int C_out,
    type out[],
    const int k
) {
    type pixel;
    type *in_addr;
    type *k_addr = (type *) w;
    type *out_addr = (type *) out;

    size_t vl = 0;
    int total;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            in_addr = in + j*C_in + i*C_in*W_in;
            for (int m = 0; m < C_in; m++)
            {
                pixel = *(in_addr);
                in_addr++;
                
                out_addr = (type *) out;
                for (total = C_out; total > 0; total -= vl)
                {
                    __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
                    __asm__ volatile("vle32.v v16, (%0)" :: "r"(k_addr));
                    __asm__ volatile("vle32.v v24, (%0)" :: "r"(out_addr));
                    __asm__ volatile("vmacc.vx v24, %0, v16" :: "r"(pixel));
                    __asm__ volatile("vse32.v v24, (%0)" :: "r"(out_addr));

                    k_addr += vl;
                    out_addr += vl;
                }
            }
        }
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void stemBlock (
    const int H_in,
    const int W_in,
    const int C_in,
    const type in[],
    const type w[],
    const type b[],
    const int H_out,
    const int W_out,
    const int C_out,
    type out[],
    const int K,
    const int s,
    const int id,
    const int target_id
) {
    const int p = W_out - (int)((W_in-K)/s) - 1;
    type *in_pd = calloc(C_in*(W_in+p)*(H_in+p), sizeof(type));

    if (p == 2) pad (H_in, W_in, C_in, in, in_pd);
    else memcpy(in_pd, in, H_in*W_in*C_in*sizeof(type));

    int y = 0, x = 0;
    int *out_chunk;

    long unsigned *conv = malloc(H_out*sizeof(long unsigned)); int conv_it = 0;
    long unsigned *send = malloc(H_out*sizeof(long unsigned)); int send_it = 0;

    long unsigned total_noc_time = 0;

    for (int k = 0; k < H_out; k++)
    {
        x = 0;

        long unsigned to = memphis_get_tick();

        for (int l = 0; l < W_out; l++)
        {
            out_chunk = out + l*C_out + k*C_out*W_out;
            conv_chunk (
                H_in,
                W_in + p,
                C_in,
                in_pd + x + y,
                w,
                H_out,
                W_out,
                C_out,
                out_chunk,
                K
            );

            int_handler (C_out, out_chunk);
            sum_bias (C_out, out_chunk, b);

            x += s*C_in;
        }

        conv[conv_it++] = memphis_get_tick() - to;

        // send row
        long unsigned s_to = memphis_get_tick();
        memphis_send(out + k*C_out*W_out, C_out*W_out*sizeof(type), target_id);
        long unsigned s_tf = memphis_get_tick();

        send[send_it++] = s_tf - s_to;
        total_noc_time += (s_tf - s_to);

        y += s*C_in*(W_in+p);
    }

    printf("--- STATS ---\n");

    printf("[%d] noc_total  = %lu\n", id, total_noc_time);

    PRINT_STATS(conv, H_out);
    PRINT_STATS(send, H_out);

    printf("--- END ---\n");

    free(conv);
    free(send);
    free(in_pd);
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock (
   const int H_in,
   const int W_in,
   const int C_in,
   const type w_b11[],
   const type w_b33a[],
   const type w_b33b[],
   const type w_b33c[],
   const type b_b11[],
   const type b_b33a[],
   const type b_b33b[],
   const type b_b33c[],
   type x[],
   type out[],
   const int parent_id,
   const int id,
   const int target_id
) {
    const int C_b11  = 12;
    const int C_b33a = 12;
    const int C_b33b =  6;
    const int C_b33c =  6;
    const int C_out  = C_in + 24;

    type *y0 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y1 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y2 = calloc((H_in+2)*(W_in+2)*6, sizeof(type));
    type *y3 = calloc(H_in*W_in*6, sizeof(type));

    type *y0_chunk;
    type *y1_chunk;
    type *y2_chunk;
    type *y3_chunk;
    type *out_chunk;

    int rows_b11  = 0;
    int rows_b33a = 0;
    int rows_b33b = 0;
    int rows_b33c = 0;

    unsigned *time_start  = malloc((H_in+3)*sizeof(unsigned));
    unsigned *time_finish = malloc((H_in+3)*sizeof(unsigned));

    for (int k = 0; k < (H_in+3); k++)
    {
        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);

            for (int l = 0; l < W_in; l++)
            {
                // y0: padded
                y0_chunk = y0 + C_b11*(W_in+3); // initial offset
                y0_chunk = y0_chunk + l*C_b11 + rows_b11*C_b11*(W_in+2);
                conv_chunk (
                    H_in, W_in, C_in, x + l*C_in + rows_b11*C_in*W_in,
                    w_b11,
                    H_in, W_in, C_b11, y0_chunk,
                    1
                ); 

                int_handler (C_b11, y0_chunk);
                sum_bias (C_b11, y0_chunk, b_b11);
                relu (C_b11, y0_chunk);
            }
            rows_b11++;
        }

        // b33a
        if (rows_b11 >= 2 && rows_b33a < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y1_chunk = y1 + C_b33a*(W_in+3);
                y1_chunk = y1_chunk + l*C_b33a + rows_b33a*C_b33a*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b11,
                    y0 + l*C_b11 + rows_b33a*C_b11*(W_in+2),
                    w_b33a,
                    H_in, W_in, C_b33a,
                    y1_chunk, 
                    3
                );

                int_handler (C_b33a, y1_chunk);
                sum_bias (C_b33a, y1_chunk, b_b33a);
                relu (C_b33a, y1_chunk);
            }

            rows_b33a++;
        }

        // b33b
        if (rows_b33a >= 2 && rows_b33b < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y2_chunk = y2 + C_b33b*(W_in+3);
                y2_chunk = y2_chunk + l*C_b33b + rows_b33b*C_b33b*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b33a,
                    y1 + l*C_b33a + rows_b33b*C_b33a*(W_in+2),
                    w_b33b,
                    H_in, W_in, C_b33b,
                    y2_chunk,
                    3
                );

                int_handler (C_b33b, y2_chunk);
                sum_bias (C_b33b, y2_chunk, b_b33b);
                relu (C_b33b, y2_chunk);
            }

            rows_b33b++;
        }

        // b33c
        if (rows_b33b >= 2 && rows_b33c < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y3_chunk = y3 + l*C_b33c + rows_b33c*C_b33c*W_in;
                conv_chunk (
                    H_in, W_in+2, C_b33b,
                    y2 + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    w_b33c,
                    H_in, W_in, C_b33c,
                    y3_chunk,
                    3
                );

                int_handler (C_b33c, y3_chunk);
                sum_bias (C_b33c, y3_chunk, b_b33c);
                relu (C_b33c, y3_chunk);

                out_chunk = out + l*C_out + rows_b33c*C_out*(W_in);
                // concat
                concat4_chunk (
                    C_in,
                    x + l*C_in + rows_b33c*C_in*W_in,
                    y1 + (C_b33a*(W_in+3)) + l*C_b33a + rows_b33c*C_b33a*(W_in+2),
                    y2 + (C_b33b*(W_in+3)) + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    y3_chunk,
                    out_chunk
                );

            }

            // printf("[MFBlock] finished row (%d/%d)\n", rows_b33c+1, H_in);

            // send row
            time_finish[k] = memphis_get_tick();
            memphis_send(out + rows_b33c*C_out*W_in, C_out*W_in*sizeof(type), target_id);

            rows_b33c++;
        }
        else
        {
            time_finish[k] = memphis_get_tick();
        }
    }

    long unsigned time_total = 0;
    for (int k = 0; k < (H_in+3); k++)
    {
        printf("[%d] %d %u - %u = %u\n", id, k, time_finish[k], time_start[k], (time_finish[k]-time_start[k]));
        time_total += (time_finish[k] - time_start[k]);
    }

    printf("[%d] time_total = %lu\n", id, time_total);

    free(time_start);
    free(time_finish);
    free(y0);
    free(y1);
    free(y2);
    free(y3);
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock_tran (
   const int H_in,
   const int W_in,
   const int C_in,
   const type w_b11[],
   const type w_b33a[],
   const type w_b33b[],
   const type w_b33c[],
   const type w_tran[],
   const type b_b11[],
   const type b_b33a[],
   const type b_b33b[],
   const type b_b33c[],
   const type b_tran[],
   type x[],
   type out[], // pooled
   const int parent_id,
   const int id,
   const int target_id
) {
    const int H_out = H_in / 2;
    const int W_out = W_in / 2;

    const int C_b11  = 12;
    const int C_b33a = 12;
    const int C_b33b =  6;
    const int C_b33c =  6;
    const int C_out = C_in + 24;

    type *y0 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y1 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y2 = calloc((H_in+2)*(W_in+2)*6, sizeof(type));
    type *y3 = calloc(H_in*W_in*6, sizeof(type));
    type *tran_out = calloc(H_in * W_in * C_out, sizeof(type));

    type *y0_chunk;
    type *y1_chunk;
    type *y2_chunk;
    type *y3_chunk;
    type *tran_chunk;
    type *out_chunk;

    int rows_b11  = 0;
    int rows_b33a = 0;
    int rows_b33b = 0;
    int rows_b33c = 0;
    int rows_pool = 0;

    unsigned *time_start  = malloc((H_in+3)*sizeof(unsigned));
    unsigned *time_finish = malloc((H_in+3)*sizeof(unsigned));

    for (int k = 0; k < (H_in+3); k++)
    {
        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);

            for (int l = 0; l < W_in; l++)
            {
                // y0: padded
                y0_chunk = y0 + C_b11*(W_in+3); // initial offset
                y0_chunk = y0_chunk + l*C_b11 + rows_b11*C_b11*(W_in+2);
                conv_chunk (
                    H_in, W_in, C_in, x + l*C_in + rows_b11*C_in*W_in,
                    w_b11,
                    H_in, W_in, C_b11, y0_chunk,
                    1
                ); 

                int_handler (C_b11, y0_chunk);
                sum_bias (C_b11, y0_chunk, b_b11);
                relu (C_b11, y0_chunk);
            }
            rows_b11++;
        }

        // b33a
        if (rows_b11 >= 2 && rows_b33a < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y1_chunk = y1 + C_b33a*(W_in+3);
                y1_chunk = y1_chunk + l*C_b33a + rows_b33a*C_b33a*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b11,
                    y0 + l*C_b11 + rows_b33a*C_b11*(W_in+2),
                    w_b33a,
                    H_in, W_in, C_b33a,
                    y1_chunk, 
                    3
                );

                int_handler (C_b33a, y1_chunk);
                sum_bias (C_b33a, y1_chunk, b_b33a);
                relu (C_b33a, y1_chunk);
            }

            rows_b33a++;
        }

        // b33b
        if (rows_b33a >= 2 && rows_b33b < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y2_chunk = y2 + C_b33b*(W_in+3);
                y2_chunk = y2_chunk + l*C_b33b + rows_b33b*C_b33b*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b33a,
                    y1 + l*C_b33a + rows_b33b*C_b33a*(W_in+2),
                    w_b33b,
                    H_in, W_in, C_b33b,
                    y2_chunk,
                    3
                );

                int_handler (C_b33b, y2_chunk);
                sum_bias (C_b33b, y2_chunk, b_b33b);
                relu (C_b33b, y2_chunk);
            }

            rows_b33b++;
        }

        // b33c
        if (rows_b33b >= 2 && rows_b33c < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y3_chunk = y3 + l*C_b33c + rows_b33c*C_b33c*W_in;
                conv_chunk (
                    H_in, W_in+2, C_b33b,
                    y2 + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    w_b33c,
                    H_in, W_in, C_b33c,
                    y3_chunk,
                    3
                );

                int_handler (C_b33c, y3_chunk);
                sum_bias (C_b33c, y3_chunk, b_b33c);
                relu (C_b33c, y3_chunk);

                type concat_buf[C_out];
                
                // concat
                concat4_chunk (
                    C_in,
                    x + l*C_in + rows_b33c*C_in*W_in,
                    y1 + (C_b33a*(W_in+3)) + l*C_b33a + rows_b33c*C_b33a*(W_in+2),
                    y2 + (C_b33b*(W_in+3)) + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    y3_chunk,
                    concat_buf
                );

                tran_chunk = tran_out + l*C_out + rows_b33c*C_out*W_in;

                conv_chunk (
                    1, 1, C_out, 
                    concat_buf,
                    w_tran,
                    1, 1, C_out, 
                    tran_chunk,
                    1             
                );

                int_handler(C_out, tran_chunk);
                sum_bias(C_out, tran_chunk, b_tran);
                relu(C_out, tran_chunk);
            }

            rows_b33c++;

            if (rows_b33c > 0 && rows_b33c % 2 == 0) 
            {
                
                for (int l_pool = 0; l_pool < W_out; l_pool++) 
                {
                    out_chunk = out + l_pool*C_out + rows_pool*C_out*W_out;
                    
                    avg_pool_chunk(
                        tran_out + (l_pool*2)*C_out + (rows_b33c-2)*C_out*W_in, 
                        W_in, 
                        C_out, 
                        out_chunk
                    );
                }
                
                // printf("[MFBlock_tran] finished row (%d/%d)\n", rows_pool+1, H_out);

                // send row
                time_finish[k] = memphis_get_tick();
                memphis_send(out + rows_pool*C_out*W_out, C_out*W_out*sizeof(type), target_id);

                rows_pool++;
            }
            else
            {
                time_finish[k] = memphis_get_tick();
            }
        }
        else
        {
            time_finish[k] = memphis_get_tick();
        }
    }

    long unsigned time_total = 0;
    for (int k = 0; k < (H_in+3); k++)
    {
        printf("[%d] %d %u - %u = %u\n", id, k, time_finish[k], time_start[k], (time_finish[k]-time_start[k]));
        time_total += (time_finish[k] - time_start[k]);
    }

    printf("[%d] time_total = %lu\n", id, time_total);

    free(time_start);
    free(time_finish);
    free(y0);
    free(y1);
    free(y2);
    free(y3);
    free(tran_out);
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock_gap (
   const int H_in,
   const int W_in,
   const int C_in,
   const type w_b11[],
   const type w_b33a[],
   const type w_b33b[],
   const type w_b33c[],
   const type w_tran[],
   const type b_b11[],
   const type b_b33a[],
   const type b_b33b[],
   const type b_b33c[],
   const type b_tran[],
   type x[],
   type out[], // pooled
   const int parent_id,
   const int id,
   const int target_id
) {
    const int C_b11  = 12;
    const int C_b33a = 12;
    const int C_b33b =  6;
    const int C_b33c =  6;
    const int C_out = C_in + 24;

    type *y0 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y1 = calloc((H_in+2)*(W_in+2)*12, sizeof(type));
    type *y2 = calloc((H_in+2)*(W_in+2)*6, sizeof(type));
    type *y3 = calloc(H_in*W_in*6, sizeof(type));

    type *tran_chunk = calloc(C_out, sizeof(type));

    type *y0_chunk;
    type *y1_chunk;
    type *y2_chunk;
    type *y3_chunk;

    int rows_b11  = 0;
    int rows_b33a = 0;
    int rows_b33b = 0;
    int rows_b33c = 0;

    unsigned *time_start  = malloc((H_in+3)*sizeof(unsigned));
    unsigned *time_finish = malloc((H_in+3)*sizeof(unsigned));

    for (int k = 0; k < (H_in+3); k++)
    {
        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);

            for (int l = 0; l < W_in; l++)
            {
                // y0: padded
                y0_chunk = y0 + C_b11*(W_in+3); // initial offset
                y0_chunk = y0_chunk + l*C_b11 + rows_b11*C_b11*(W_in+2);
                conv_chunk (
                    H_in, W_in, C_in, x + l*C_in + rows_b11*C_in*W_in,
                    w_b11,
                    H_in, W_in, C_b11, y0_chunk,
                    1
                ); 

                int_handler (C_b11, y0_chunk);
                sum_bias (C_b11, y0_chunk, b_b11);
                relu (C_b11, y0_chunk);
            }
            rows_b11++;
        }

        // b33a
        if (rows_b11 >= 2 && rows_b33a < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y1_chunk = y1 + C_b33a*(W_in+3);
                y1_chunk = y1_chunk + l*C_b33a + rows_b33a*C_b33a*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b11,
                    y0 + l*C_b11 + rows_b33a*C_b11*(W_in+2),
                    w_b33a,
                    H_in, W_in, C_b33a,
                    y1_chunk, 
                    3
                );

                int_handler (C_b33a, y1_chunk);
                sum_bias(C_b33a, y1_chunk, b_b33a);
                relu (C_b33a, y1_chunk);
            }

            rows_b33a++;
        }

        // b33b
        if (rows_b33a >= 2 && rows_b33b < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y2_chunk = y2 + C_b33b*(W_in+3);
                y2_chunk = y2_chunk + l*C_b33b + rows_b33b*C_b33b*(W_in+2);
                conv_chunk (
                    H_in, W_in+2, C_b33a,
                    y1 + l*C_b33a + rows_b33b*C_b33a*(W_in+2),
                    w_b33b,
                    H_in, W_in, C_b33b,
                    y2_chunk,
                    3
                );

                int_handler (C_b33b, y2_chunk);
                sum_bias (C_b33b, y2_chunk, b_b33b);
                relu (C_b33b, y2_chunk);
            }

            rows_b33b++;
        }

        // b33c
        if (rows_b33b >= 2 && rows_b33c < H_in)
        {
            for (int l = 0; l < W_in; l++)
            {
                y3_chunk = y3 + l*C_b33c + rows_b33c*C_b33c*W_in;
                conv_chunk (
                    H_in, W_in+2, C_b33b,
                    y2 + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    w_b33c,
                    H_in, W_in, C_b33c,
                    y3_chunk,
                    3
                );

                int_handler (C_b33c, y3_chunk);
                sum_bias (C_b33c, y3_chunk, b_b33c);
                relu (C_b33c, y3_chunk);

                type concat_buf[C_out];
                
                // concat
                concat4_chunk (
                    C_in,
                    x + l*C_in + rows_b33c*C_in*W_in,
                    y1 + (C_b33a*(W_in+3)) + l*C_b33a + rows_b33c*C_b33a*(W_in+2),
                    y2 + (C_b33b*(W_in+3)) + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    y3_chunk,
                    concat_buf
                );

                conv_chunk (
                    1, 1, C_out, 
                    concat_buf,
                    w_tran,
                    1, 1, C_out, 
                    tran_chunk,
                    1             
                );

                int_handler(C_out, tran_chunk);
                sum_bias(C_out, tran_chunk, b_tran);
                relu (C_out, tran_chunk);

                size_t vl = 0;
                type *out_addr = (type *) out;
                type *tran_chunk_addr = (type *) tran_chunk;

                // GAP accumulator
                for (int total = C_out; total > 0; total -= vl)
                {
                    __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
                    __asm__ volatile("vle32.v v24, (%0)" :: "r"(out_addr));
                    __asm__ volatile("vle32.v v16, (%0)" :: "r"(tran_chunk_addr));
                    __asm__ volatile("vadd.vv v24, v24, v16");
                    __asm__ volatile("vse32.v v24, (%0)" :: "r"(out_addr));

                    out_addr += vl;
                    tran_chunk_addr += vl;
                }

                memset(tran_chunk, 0, C_out*sizeof(type));
            }

            rows_b33c++;
        }

        time_finish[k] = memphis_get_tick();
    }

    unsigned time_div = memphis_get_tick();

    // GAP division
    size_t vl = 0;
    type *out_addr = (type *) out;

    for (int total = C_out; total > 0; total -= vl)
    {
        __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
        __asm__ volatile("vle32.v v24, (%0)" :: "r"(out_addr));
        __asm__ volatile("vsra.vi v24, v24, 4");
        __asm__ volatile("vse32.v v24, (%0)" :: "r"(out_addr));

        out_addr += vl;
    }

    time_div = memphis_get_tick() - time_div;

    printf("[%d] time_div = %u\n", id, time_div);

    long unsigned time_total = time_div;
    for (int k = 0; k < (H_in+3); k++)
    {
        printf("[%d] %d %u - %u = %u\n", id, k, time_finish[k], time_start[k], (time_finish[k]-time_start[k]));
        time_total += (time_finish[k] - time_start[k]);
    }

    printf("[%d] time_total = %lu\n", id, time_total);

    // printf("[MFBlock_gap] finished global average pooling\n");

    memphis_send(out, C_out*sizeof(type), target_id);

    free(time_start);
    free(time_finish);
    free(y0);
    free(y1);
    free(y2);
    free(y3);
    free(tran_chunk);
}
//}}}
//{{{
// Vector tail half of MFBlock_tran: pairs with MFBlock_backbone (cnn_common_scalar.h)
// running on a separate PE. Receives one full concat row (W_in*C_out elements) per
// iteration from parent_id, runs tran_conv+relu (vector) per pixel, and every 2 rows
// pools and streams the pooled row to target_id. Per-stage timing mirrors
// applications/mfblock_tran/cnn_debug.h's granularity: NoC recv/send cost is tracked
// separately from tran_conv/pool compute cost.
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock_tran_tail (
   const int H_in,
   const int W_in,
   const int C_out,
   const type w_tran[],
   const type b_tran[],
   type out[], // pooled
   const int parent_id,
   const int id,
   const int target_id
) {
    const int H_out = H_in / 2;
    const int W_out = W_in / 2;

    type *concat_row = calloc(W_in*C_out, sizeof(type));
    type *tran_out   = calloc(H_in*W_in*C_out, sizeof(type));
    type *tran_chunk;
    type *out_chunk;

    int rows_b33c = 0;
    int rows_pool = 0;

    long unsigned *recv = malloc(H_in*sizeof(long unsigned));   int recv_it = 0;
    long unsigned *tran = malloc(H_in*sizeof(long unsigned));   int tran_it = 0;
    long unsigned *send = malloc(H_out*sizeof(long unsigned));  int send_it = 0;
    long unsigned *pool = malloc(H_out*sizeof(long unsigned));  int pool_it = 0;

    long unsigned total_noc_time = 0;

    for (int k = 0; k < H_in; k++)
    {
        long unsigned r_to = memphis_get_tick();
        memphis_receive(concat_row, W_in*C_out*sizeof(type), parent_id);
        long unsigned r_tf = memphis_get_tick();

        recv[recv_it++] = r_tf - r_to;
        total_noc_time += (r_tf - r_to);

        long unsigned to = memphis_get_tick();

        for (int l = 0; l < W_in; l++)
        {
            tran_chunk = tran_out + l*C_out + rows_b33c*C_out*W_in;

            conv_chunk (
                1, 1, C_out,
                concat_row + l*C_out,
                w_tran,
                1, 1, C_out,
                tran_chunk,
                1
            );

            int_handler(C_out, tran_chunk);
            sum_bias(C_out, tran_chunk, b_tran);
            relu(C_out, tran_chunk);
        }

        tran[tran_it++] = memphis_get_tick() - to;
        rows_b33c++;

        if (rows_b33c > 0 && rows_b33c % 2 == 0)
        {
            long unsigned p_to = memphis_get_tick();

            for (int l_pool = 0; l_pool < W_out; l_pool++)
            {
                out_chunk = out + l_pool*C_out + rows_pool*C_out*W_out;

                avg_pool_chunk(
                    tran_out + (l_pool*2)*C_out + (rows_b33c-2)*C_out*W_in,
                    W_in,
                    C_out,
                    out_chunk
                );
            }

            pool[pool_it++] = memphis_get_tick() - p_to;

            long unsigned s_to = memphis_get_tick();
            memphis_send(out + rows_pool*C_out*W_out, C_out*W_out*sizeof(type), target_id);
            long unsigned s_tf = memphis_get_tick();

            send[send_it++] = s_tf - s_to;
            total_noc_time += (s_tf - s_to);

            rows_pool++;
        }
    }

    printf("--- STATS ---\n");

    printf("[%d] noc_total  = %lu\n", id, total_noc_time);

    PRINT_STATS(recv, H_in);
    PRINT_STATS(tran, H_in);
    PRINT_STATS(pool, H_out);
    PRINT_STATS(send, H_out);

    printf("--- END ---\n");

    free(recv);
    free(tran);
    free(pool);
    free(send);

    free(concat_row);
    free(tran_out);
}
//}}}
//{{{
// Vector tail half of MFBlock_gap: same receive+tran_conv loop as MFBlock_tran_tail,
// but accumulates a running global-average-pool sum across all rows/pixels instead
// of pooling per-row, then divides and sends once after the last row.
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock_gap_tail (
   const int H_in,
   const int W_in,
   const int C_out,
   const type w_tran[],
   const type b_tran[],
   type out[],
   const int parent_id,
   const int id,
   const int target_id
) {
    type *concat_row = calloc(W_in*C_out, sizeof(type));
    type *tran_chunk = calloc(C_out, sizeof(type));

    long unsigned *recv = malloc(H_in*sizeof(long unsigned)); int recv_it = 0;
    long unsigned *tran = malloc(H_in*sizeof(long unsigned)); int tran_it = 0;

    long unsigned total_noc_time = 0;

    for (int k = 0; k < H_in; k++)
    {
        long unsigned r_to = memphis_get_tick();
        memphis_receive(concat_row, W_in*C_out*sizeof(type), parent_id);
        long unsigned r_tf = memphis_get_tick();

        recv[recv_it++] = r_tf - r_to;
        total_noc_time += (r_tf - r_to);

        long unsigned to = memphis_get_tick();

        for (int l = 0; l < W_in; l++)
        {
            conv_chunk (
                1, 1, C_out,
                concat_row + l*C_out,
                w_tran,
                1, 1, C_out,
                tran_chunk,
                1
            );

            int_handler(C_out, tran_chunk);
            sum_bias(C_out, tran_chunk, b_tran);
            relu(C_out, tran_chunk);

            // GAP accumulator
            for (int n = 0; n < C_out; n++) {
                out[n] += tran_chunk[n];
            }

            memset(tran_chunk, 0, C_out*sizeof(type));
        }

        tran[tran_it++] = memphis_get_tick() - to;
    }

    // GAP division
    for (int n = 0; n < C_out; n++)
    {
        out[n] >>= 4;
    }

    long unsigned s_to = memphis_get_tick();
    memphis_send(out, C_out*sizeof(type), target_id);
    long unsigned s_tf = memphis_get_tick();
    total_noc_time += (s_tf - s_to);

    printf("--- STATS ---\n");

    printf("[%d] noc_total  = %lu\n", id, total_noc_time);

    PRINT_STATS(recv, H_in);
    PRINT_STATS(tran, H_in);

    printf("--- END ---\n");

    free(recv);
    free(tran);

    free(concat_row);
    free(tran_chunk);
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void fc (
    const int INPUT_CHANNELS,
    type in[],
    const type w[],
    const type b[],
    const int NEURONS,
    type out[],
    const int parent_id,
    const int id
) {
    long unsigned r_to = memphis_get_tick();
    memphis_receive(in, INPUT_CHANNELS*sizeof(type), parent_id);
    long unsigned total_noc_time = memphis_get_tick() - r_to;

    long unsigned to = memphis_get_tick();

    size_t vl;
    int pixel;
    int *in_addr   = (int *) in;
    int *out_addr  = (int *) out;
    int *w_addr    = (int *) w;
    int *b_addr = (int *) b;

    for (int ch = 0; ch < INPUT_CHANNELS; ch++)
    {
        pixel = *in_addr;
        out_addr = (int *) out;
        in_addr++;
        for (int total = NEURONS; total > 0; total -= vl)
        {
            __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
            __asm__ volatile("vle32.v v8, (%0)" :: "r"(w_addr));
            __asm__ volatile("vle32.v v16, (%0)" :: "r"(out_addr));
            __asm__ volatile("vmacc.vx v16, %0, v8" :: "r"(pixel));
            __asm__ volatile("vse32.v v16, (%0)" :: "r"(out_addr));
            out_addr += vl;
            w_addr   += vl;
        }
    }

    // int handler + bias
    out_addr = (int *) out;
    for (int total = NEURONS; total > 0; total -= vl)
    {
        __asm__ volatile("vsetvli %0, %1, e32, m8, ta, ma" : "=r"(vl) : "r"(total));
        __asm__ volatile("vle32.v v16, (%0)" :: "r"(out_addr));
        __asm__ volatile("vle32.v v8, (%0)" :: "r"(b_addr));
        __asm__ volatile("vsra.vi v16, v16, 13"); // int_handler
        __asm__ volatile("vadd.vv v16, v16, v8"); // bias
        __asm__ volatile("vse32.v v16, (%0)" :: "r"(out_addr));
        out_addr  += vl;
        b_addr += vl;
    }

    long unsigned compute[1] = { memphis_get_tick() - to };
    long unsigned recv[1] = { total_noc_time };

    printf("--- STATS ---\n");

    printf("[%d] noc_total  = %lu\n", id, total_noc_time);

    PRINT_STATS(recv, 1);
    PRINT_STATS(compute, 1);

    printf("--- END ---\n");
}
//}}}

#endif