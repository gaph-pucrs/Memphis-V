#ifndef __CNN_COMMON_SCALAR_H__
#define __CNN_COMMON_SCALAR_H__

#include <stdlib.h>
#include <string.h>

typedef int type;

//{{{
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
void relu(const int C, type buf[])
{
    for (int n = 0; n < C; n++)
    {
        buf[n] = (buf[n] > 0) ? buf[n] : 0; 
    }
}
//}}}
//{{{
void int_handler (const int C, type buf[])
{
    for (int n = 0; n < C; n++)
    {
        buf[n] >>= 13;
    }
}
//}}}
//{{{
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

                memset(tran_chunk, 0, C_out*sizeof(type));
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
