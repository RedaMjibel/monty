#include "monty.h"

/**
 * _pint - print int a top of stack
 * @stack: pointer to linked list stack
 * @line_number: number of line opcode occurs on
 *
 * Return: nothing
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *pointer;

	pointer = *stack;
	if (pointer == NULL)
	{
		printf("line%d: can't pint, stack is empty\n", line_number);
		if (*stack != 0)
			free_list(*stack);
		exit(EXIT_FAILURE);
	}
}
