#include "monty.h"
/**
 * remove_node - pop
 * @head: pointer
 * @line: number of line
 */
void remove_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	if (*head)
	{
		*head = (*head)->next;
		free(aux);
	}
}
