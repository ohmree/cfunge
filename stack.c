#include "stack.h"

#include <assert.h>
#include <stdlib.h>

typedef struct Cell {
    struct Cell *prev;
    short value;
} Cell, *Stack;

short stack_pop(Stack *s) {
    if (*s == NULL || stack_is_value_invalid((*s)->value)) {
        stack_push(s, 0);
        return INVALID_STACK_VALUE;
    } else {
        short val  = (*s)->value;
        Cell *temp = *s;
        *s         = (*s)->prev ? (*s)->prev : NULL;
        free(temp);
        return val;
    }
}

void stack_push(Stack *s, short val) {
    if (*s == NULL) {
        *s          = malloc(sizeof(Cell));
        (*s)->value = val;
        (*s)->prev  = NULL;
    } else {
        Cell *temp  = *s;
        *s          = malloc(sizeof(Cell));
        (*s)->value = val;
        (*s)->prev  = temp;
    }
}

void stack_destroy(Stack *s) {
    do {
        Cell *temp = *s;
        *s         = (*s)->prev ? (*s)->prev : NULL;
        free(temp);
    } while (*s != NULL);
    s = NULL;
}
