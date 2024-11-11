#include <stdlib.h>
#include <stdio.h>

int conv_kernel(int *in_line, int *filter_slice, const unsigned int kernel_height, const unsigned int kernel_width, const unsigned int input_width)
{
    int *in_el = in_line;
    int *f_el = filter_slice;
    int sum = 0.0;

    for (unsigned f_y = 0; f_y < kernel_height; f_y++)
    {
        for (unsigned f_x = 0; f_x < kernel_width; f_x++)
        {
            sum += f_el[f_x] * in_el[f_x];
        }
        f_el += kernel_width;
        in_el += input_width;
    }

    return sum;
}

int* conv_channel(  const          int weights[],     const int          in[],          const unsigned int input_depth,
                    unsigned       int o_channel,     unsigned int       i_channel,     const unsigned int kernel_height,
                    const unsigned int kernel_width,  const unsigned int input_height,  const unsigned int input_width,
                    const unsigned int output_height, const unsigned int output_width,  const unsigned int stride)
{
    int *filter_slice = &weights[(o_channel * kernel_height * kernel_width * input_depth) + (i_channel * kernel_height * kernel_width)];
    int *in_slice = &in[i_channel * input_height * input_width];
    unsigned ls = stride * input_height;

    size_t alloc_size = output_height * output_width;
    int *out_slice = malloc(alloc_size * sizeof(int));
    if (!out_slice)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    };

    // Inicializa
    for (unsigned i = 0; i < output_height * output_width; ++i)
    {
        out_slice[i] = 0;
    }

    int *o_line = out_slice;

    for (unsigned o_y = 0; o_y < output_height; o_y++)
    {
        int *in_line = in_slice;
        for (unsigned o_x = 0; o_x < output_width; o_x++)
        {
            int sum = conv_kernel(in_line, filter_slice, kernel_height, kernel_width, input_width);
            o_line[o_x] += sum;

            in_line += stride;
        }
        o_line += output_width;
        in_slice += ls;
    }

    return out_slice;
}

void conv_sum_bias(const unsigned int output_height, const unsigned int output_width, int *out_slice, const int bias[], unsigned int o_channel)
{
    for (unsigned o_x = 0; o_x < output_height * output_width; o_x++)
    {
        out_slice[o_x] += bias[o_channel];
        out_slice[o_x] = out_slice[o_x] / 1024;
    }
}