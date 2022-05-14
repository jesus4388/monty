#include "monty.h"
/**
 * sum_node - add node
 * @head: pointer
 * @line: number of line
 */
void sum_node(stack_t **head, unsigned int line)
{
	(*head)->next->n = (*head)->n + (*head)->next->n;
	remove_node(head, line);
}
