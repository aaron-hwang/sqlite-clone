#include <stdio.h>

typedef struct {
    char* buffer;
    size_t buffer_len;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void close_input_buffer(InputBuffer* buf);