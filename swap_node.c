#include "monty.h"
/**
 * swap_node - swap
 * @head: pointer
 * @line: number of line
 */
void swap_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	if (*head)
	{
		aux = aux->next;
		(*head)->next = (*head)->next->next;
		aux->next = *head;
		aux->prev = NULL;
		(*head)->prev = aux;
		*head = aux;
	}
}
