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

void read_input(InputBuffer* buf) {
    ssize_t bytes_read = getline(&buf->buffer, &buf->buffer_len, stdin);
    if (bytes_read <= 0) {
        printf("Error reading from stdin\n");
        return;
    }   
    buf->input_length -= 1;
    buf->buffer[bytes_read - 1] = 0;
}