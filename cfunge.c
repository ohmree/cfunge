#include "cfunge.h"

#include <stdio.h>

#include "stack.h"

int main(void) {
    Stack s = NULL;
    stack_push(&s, 1);
    short a = stack_pop(&s);
    printf("%d\n", a);
    short b = stack_pop(&s);
    if (stack_is_value_invalid(b)) {
        puts("Underflow!");
    } else {
        printf("%d\n", stack_pop(&s));
    }
    return 0;
}
