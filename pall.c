#include "monty.h"

void pall(stack_t *stack)
{
    while (stack != NULL)
    {
        printf("%d\n", stack->n);
        stack = stack->next;
    }
}

void opcode_pall(stack_t **stack, unsigned int line_number)
{
    (void)line_number; /* Unused parameter */

    pall(*stack);
}

