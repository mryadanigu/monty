#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - Entry point of the Monty interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	/* Add your code to read Monty byte code file and execute instructions here */

	return (0);
}

