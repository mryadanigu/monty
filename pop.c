#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number in the file
 *
 * Return: no return
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	pop_from_stack(stack);
}

/**
 * pop_from_stack - removes the top element of the stack
 * @stack: pointer to the head of the stack
 *
 * Return: no return
 */
void pop_from_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	if ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	else
	{
		*stack = NULL;
	}

	free(temp);
}

