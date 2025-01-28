#include "input_buffer.h"
#include <stdio.h>
#include <stdlib.h>

InputBuffer* new_input_buffer() {
    InputBuffer* buf = malloc(sizeof(InputBuffer));
    buf->buffer = NULL;
    buf->buffer_len = 0;
    buf->input_length = 0;
    return buf;
}

void close_input_buffer(InputBuffer* buf) {
    free(buf->buffer);
    free(buf);
}