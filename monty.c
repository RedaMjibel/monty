#include "monty.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: arguments given to the program
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	stack_t *stack;

	stack = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		if (stack != NULL)
			free_list(stack);
		exit(EXIT_FAILURE);
	}
	read_file(argv[1], &stack);
	free_list(stack);
	return (0);
}
