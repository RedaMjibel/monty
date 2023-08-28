#include "monty.h"

/**
 * get_func - checks opcode and matches it with the right function
 * @code: the opcode
 *
 * Return: return a function, or NULL on failure
 */

instruct_func get_func(char *code)
{
	int i;

	instruction_t instruct[] = {
		{"pint", _pint},
		{NULL, NULL}
	};

i = 0;

while(instruct[i].f != NULL && strcmp(instruct[i].opcode, code) != 0)
{
	i++;
}

return (instruct[i].f);

}
