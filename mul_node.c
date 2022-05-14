#include "monty.h"
/**
 * mul_node - mul node
 * @head: pointer
 * @line: number of line
 */
void mul_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;

	aux->next->n = aux->next->n * aux->n;
	aux = aux->next;
	remove_node(head, line);
	*head = aux;
}
