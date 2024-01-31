#include "monty.h"

void push(stack_t **stack, int value, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}

void opcode_push(stack_t **stack, unsigned int line_number)
{
    char *arg = strtok(NULL, " \t\n");
    if (arg == NULL || !is_number(arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    push(stack, atoi(arg), line_number);
}

