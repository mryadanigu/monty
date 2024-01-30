/* swap.c */
#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number in the file
 *
 * Return: no return
 */
void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

