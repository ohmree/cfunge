#pragma once

#include "grid.h"
#include "stack.h"

typedef struct State {
    Grid *grid;
    Stack stack;
    /* Instruction pointer. */
    char *ip;
} State;
