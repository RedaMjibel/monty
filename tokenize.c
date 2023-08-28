#include "monty.h"

/**
 * tokenize - tokenizes a line of opcode and returns the output to the buffer
 * @line: the line to be tokenized
 *
 * Return: the opcode or NULL on failure
 */

char *tokenize(char *line)
{
	char *opcode;

	opcode = strtok(line, "\n ");
	if (opcode == NULL)
		return (NULL);
	return (opcode);
}
