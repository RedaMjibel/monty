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
		error_exit(&stack);
	}
	return (0);
}
