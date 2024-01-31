#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	*stack = (*stack)->next;

	/* Check if the stack is empty */
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Remove the top element of the stack */

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
}
