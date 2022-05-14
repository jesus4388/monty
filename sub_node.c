#include "monty.h"
/**
 * sub_node - sub node
 * @head: pointer
 * @line: nimber of line
 */
void sub_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;

	aux->next->n = aux->next->n - aux->n;
	aux = aux->next;
	remove_node(head, line);
	*head = aux;
}
