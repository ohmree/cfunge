#pragma once

#include <stdlib.h>
#include <stdbool.h>

#define INVALID_STACK_VALUE -1

typedef struct Cell *Stack;

short stack_pop(Stack *s);
void stack_push(Stack *s, short val);

inline bool stack_is_value_invalid(short val) { return val < 0; }
