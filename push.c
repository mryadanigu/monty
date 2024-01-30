/* push.c */
#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number in the file
 *
 * Return: no return
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *argument = strtok(NULL, " \t\n");

	if (!argument || !is_integer(argument))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	int value = atoi(argument);
	    push_to_stack(stack, value);
}

/**
 * push_to_stack - adds a new node with a given value to the stack
 * @stack: pointer to the head of the stack
 * @value: value to be added to the stack
 *
 * Return: no return
 */
void push_to_stack(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

