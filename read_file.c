#include "monty.h"
#include <stdio.h>

/**
 * fread - reads a monty file and runs the commands given
 * @filename: path to the file
 * @stack: pointer to the top of the stack
 *
 * Return: nothing
 */

void read_file(char *filename, stack_t **stack)
{
	char *buffer = NULL;
	char *line;
	size_t i = 0;
	instruct_func instruct;
	int j = 1, check;
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		printf("Error: Can't open the file called %s\n", filename);
		if (*stack != NULL)
			free_list(*stack);
		exit(EXIT_FAILURE);
	}
	while ((getline(&buffer, &i, file)) != -1)
	{
		line = tokenize(buffer);
		if (line == NULL || line[0] == '#')
		{
			j++;
			continue;
		}
		instruct = get_func(line);
		if (instruct == NULL)
		{
			printf("line%d: unknown instruction %s\n", j, line);
			if (*stack != NULL)
				free_list(*stack);
			exit(EXIT_FAILURE);
		}
		instruct(stack, j);
		j++;
	}
	free(buffer);
	check = fclose(file);
	if (check == -1)
		exit(-1);
}


