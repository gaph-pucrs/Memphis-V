#ifndef __CNN_COMMON_SCALAR_H__
#define __CNN_COMMON_SCALAR_H__

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
    // memcpy(buf, b, C*sizeof(type));
    for (int n = 0; n < C; n++)
    {
        buf[n] += b[n];
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void relu(const int C, type buf[])
{
    for (int n = 0; n < C; n++)
    {
        buf[n] = (buf[n] > 0) ? buf[n] : 0; 
    }
}
//}}}
//{{{
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void int_handler (const int C, type buf[])
{
    for (int n = 0; n < C; n++)
    {
        buf[n] >>= 13;
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
    type sum = 0;
    for (int n = 0; n < C_in; n++) {
        sum  = in[n];                       // (0, 0)
        sum += in[n + C_in];                // (0, 1)
        sum += in[n + W_in*C_in];           // (1, 0)
        sum += in[n + W_in*C_in + C_in];    // (1, 1)

        out[n] = sum >> 2;
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
    // Explicit element-wise copies (not memcpy): GCC's block-copy expansion
    // ("move by pieces") can emit RVV load/store pairs for memcpy on this
    // target independent of the no-tree-vectorize/no_builtin attributes
    // above, since it isn't gated by either. A plain scalar loop is.
    for (int n = 0; n < C_in; n++) out[n] = x[n];
    for (int n = 0; n < 12; n++)   out[C_in + n] = y1[n];
    for (int n = 0; n < 6; n++)    out[C_in + 12 + n] = y2[n];
    for (int n = 0; n < 6; n++)    out[C_in + 12 + 6 + n] = y3[n];
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
    int idx_i, idx_w;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int m = 0; m < C_in; m++)
            {
                idx_i = m + j*C_in + i*C_in*W_in;
                idx_w = m*C_out + j*C_out*C_in + i*C_out*C_in*k; 
                for (int n = 0; n < C_out; n++)
                {
                    out[n] += in[idx_i]*w[idx_w+n];
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
    else { for (int n = 0; n < H_in*W_in*C_in; n++) in_pd[n] = in[n]; }

    int y = 0, x = 0;
    int *out_chunk;

    unsigned *time_start  = malloc(H_out*sizeof(unsigned));
    unsigned *time_finish = malloc(H_out*sizeof(unsigned));
    
    for (int k = 0; k < H_out; k++)
    {
        x = 0;

        time_start[k] = memphis_get_tick();

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
            relu (C_out, out_chunk);

            x += s*C_in;
        }

        // send row
        // printf("[conv] finished row (%d/%d)\n", k+1, H_out);
        time_finish[k] = memphis_get_tick();
        memphis_send(out + k*C_out*W_out, C_out*W_out*sizeof(type), target_id);

        y += s*C_in*(W_in+p);
    }

    long unsigned time_total = 0;

    for (int k = 0; k < H_out; k++)
    {
        printf("[%d] %d %u - %u = %u\n", id, k, time_finish[k], time_start[k], (time_finish[k]-time_start[k]));
        time_total += (time_finish[k] - time_start[k]);
    }

    printf("[%d] time_total = %lu\n", id, time_total);

    free(time_start);
    free(time_finish);
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
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);
        }

        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
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
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);
        }

        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
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
        if (rows_b11 < H_in)
        {
            // receive row
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);
        }

        time_start[k] = memphis_get_tick();

        // b11
        if (rows_b11 < H_in)
        {
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
                relu(C_out, tran_chunk);

                // GAP accumulator
                for (int n = 0; n < C_out; n++) {
                    out[n] += tran_chunk[n];
                }

                for (int n = 0; n < C_out; n++) tran_chunk[n] = 0;
            }

            rows_b33c++;
        }

        time_finish[k] = memphis_get_tick();
    }

    unsigned time_div = memphis_get_tick();
    // GAP division
    for (int n = 0; n < C_out; n++)
    {
        out[n] >>= 4;
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
// Backbone-only half of MFBlock_tran/MFBlock_gap: runs b11/b33a/b33b/b33c/concat
// and streams one full concat row (W_in*C_out elements) to target_id per row,
// instead of continuing on to tran_conv locally. Pairs with MFBlock_tran_tail /
// MFBlock_gap_tail (cnn_common_vector.h) running on a separate PE. Per-stage
// timing (not a single start/finish per row) mirrors
// applications/mfblock_tran/cnn_debug.h's MFBlock_tran, so compute cost per
// stage and NoC recv/send cost can be told apart.
__attribute__((optimize("no-tree-vectorize","no-tree-slp-vectorize","no-tree-loop-distribute-patterns"))) __attribute__((no_builtin))
void MFBlock_backbone (
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
    type *concat_row = calloc(W_in*C_out, sizeof(type));

    type *y0_chunk;
    type *y1_chunk;
    type *y2_chunk;
    type *y3_chunk;
    type *concat_chunk;

    int rows_b11  = 0;
    int rows_b33a = 0;
    int rows_b33b = 0;
    int rows_b33c = 0;

    long unsigned *recv        = malloc(H_in*sizeof(long unsigned)); int recv_it        = 0;
    long unsigned *b11         = malloc(H_in*sizeof(long unsigned)); int b11_it         = 0;
    long unsigned *b33a        = malloc(H_in*sizeof(long unsigned)); int b33a_it        = 0;
    long unsigned *b33b        = malloc(H_in*sizeof(long unsigned)); int b33b_it        = 0;
    long unsigned *b33c_conv   = malloc(H_in*sizeof(long unsigned)); int b33c_conv_it   = 0;
    long unsigned *b33c_concat = malloc(H_in*sizeof(long unsigned)); int b33c_concat_it = 0;
    long unsigned *send        = malloc(H_in*sizeof(long unsigned)); int send_it        = 0;

    long unsigned total_noc_time = 0;

    for (int k = 0; k < (H_in+3); k++)
    {
        if (rows_b11 < H_in)
        {
            long unsigned r_to = memphis_get_tick();
            memphis_receive(x + rows_b11*C_in*W_in, C_in*W_in*sizeof(type), parent_id);
            long unsigned r_tf = memphis_get_tick();

            recv[recv_it++] = r_tf - r_to;
            total_noc_time += (r_tf - r_to);
        }

        // b11
        if (rows_b11 < H_in)
        {
            long unsigned to = memphis_get_tick();

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

            b11[b11_it++] = memphis_get_tick() - to;
            rows_b11++;
        }

        // b33a
        if (rows_b11 >= 2 && rows_b33a < H_in)
        {
            long unsigned to = memphis_get_tick();

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

            b33a[b33a_it++] = memphis_get_tick() - to;
            rows_b33a++;
        }

        // b33b
        if (rows_b33a >= 2 && rows_b33b < H_in)
        {
            long unsigned to = memphis_get_tick();

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

            b33b[b33b_it++] = memphis_get_tick() - to;
            rows_b33b++;
        }

        // b33c + concat -> stream row to target_id
        if (rows_b33b >= 2 && rows_b33c < H_in)
        {
            long unsigned total_conv = 0, a;
            long unsigned total_concat = 0, b;

            for (int l = 0; l < W_in; l++)
            {
                y3_chunk = y3 + l*C_b33c + rows_b33c*C_b33c*W_in;

                a = memphis_get_tick();
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
                total_conv += memphis_get_tick() - a;

                concat_chunk = concat_row + l*C_out;

                b = memphis_get_tick();
                concat4_chunk (
                    C_in,
                    x + l*C_in + rows_b33c*C_in*W_in,
                    y1 + (C_b33a*(W_in+3)) + l*C_b33a + rows_b33c*C_b33a*(W_in+2),
                    y2 + (C_b33b*(W_in+3)) + l*C_b33b + rows_b33c*C_b33b*(W_in+2),
                    y3_chunk,
                    concat_chunk
                );
                total_concat += memphis_get_tick() - b;
            }

            b33c_conv[b33c_conv_it++]     = total_conv;
            b33c_concat[b33c_concat_it++] = total_concat;

            rows_b33c++;

            long unsigned s_to = memphis_get_tick();
            memphis_send(concat_row, W_in*C_out*sizeof(type), target_id);
            long unsigned s_tf = memphis_get_tick();

            send[send_it++] = s_tf - s_to;
            total_noc_time += (s_tf - s_to);
        }
    }

    printf("--- STATS ---\n");

    printf("[%d] noc_total  = %lu\n", id, total_noc_time);

    PRINT_STATS(recv, H_in);
    PRINT_STATS(b11, H_in);
    PRINT_STATS(b33a, H_in);
    PRINT_STATS(b33b, H_in);
    PRINT_STATS(b33c_conv, H_in);
    PRINT_STATS(b33c_concat, H_in);
    PRINT_STATS(send, H_in);

    printf("--- END ---\n");

    free(recv);
    free(b11);
    free(b33a);
    free(b33b);
    free(b33c_conv);
    free(b33c_concat);
    free(send);

    free(y0);
    free(y1);
    free(y2);
    free(y3);
    free(concat_row);
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
    memphis_receive(in, INPUT_CHANNELS*sizeof(type), parent_id);

    unsigned time_start = memphis_get_tick();

    for (int ch = 0; ch < INPUT_CHANNELS; ch++)
    {
        for (int n = 0; n < NEURONS; n++)
        {
            out[n] += in[ch]*w[(n)+(ch*NEURONS)];
        }
    }
    
    // int handler
    for (int n = 0; n < NEURONS; n++) {
        out[n] >>= 13;
    }

    for (int n = 0; n < NEURONS; n++) {
        out[n] += b[n];
    }

    unsigned time_finish = memphis_get_tick();
    long unsigned time_total = time_finish - time_start;

    printf("[%d] %u - %u = %u\n", id, time_finish, time_start, (time_finish-time_start));

    printf("[%d] time_total = %lu\n", id, time_total);
}
//}}}

#endif
