#include "monty.h"
/**
 * remove - pop
 * @head: pointer
 */
void remove_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	if (*head)
	{
		*head = (*head)->next;
		free (aux);
	}
}
