#include "monty.h"

void opcode_add(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n += (*stack)->n; /* Add the top two elements */
    opcode_pop(stack, line_number);   /* Remove the top element */
}

