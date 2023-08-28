#include "monty.h"

/**
 * free_list - free a list
 * @head: pointer to the first node
 *
 * Return: nothing
 */

void free_list(stack_t *head)
{
	stack_t *temp;

	while(head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
