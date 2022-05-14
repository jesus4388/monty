#include "monty.h"
/**
 * div_node - div node
 * @head: pointer
 * @line: number of line
 */
void div_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	aux->next->n = aux->next->n / aux->n;
	aux = aux->next;
	remove_node(head, line);
	*head = aux;
}
