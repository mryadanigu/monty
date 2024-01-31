#include <stdio.h>
#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: pointer to the stack
 * @line_number: line number in the file
 */
void pall(stack_t *stack, unsigned int line_number)
{
	(void)line_number; /* Not used in this example */

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}

