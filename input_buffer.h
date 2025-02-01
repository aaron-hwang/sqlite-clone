#include <stdio.h>
#include <sys/types.h>

typedef struct InputBuffer{
    char* buffer;
    size_t buffer_len;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void close_input_buffer(InputBuffer* buf);
void read_input(InputBuffer* buf);