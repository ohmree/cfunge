#include "cfunge.h"

#include "grid.h"
#include "stack.h"

#include <stdio.h>

int main(void) {
    Stack stack = NULL;
    stack_push(&stack, 1);
    stack_push(&stack, 1);
    stack_push(&stack, 1);
    stack_destroy(&stack);
    return 0;
}
