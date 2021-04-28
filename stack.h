#pragma once

#include <stdbool.h>
#include <stdlib.h>

#define INVALID_STACK_VALUE -1

typedef struct Cell *Stack;

short stack_pop(Stack *s);
void stack_push(Stack *s, short val);
void stack_destroy(Stack *s);

inline bool stack_is_value_invalid(short val) {
    return val < 0;
}
