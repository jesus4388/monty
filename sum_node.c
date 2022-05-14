#include "monty.h"
/**
 * sum_node - add node
 * @head: pointer
 * @line: number of line
 */
void sum_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;

	aux->next->n = aux->n + aux->next->n;
	aux = aux->next;
	remove_node(head, line);
	*head = aux;
}
