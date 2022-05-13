#include "monty.h"
/**
 * print_node - print node
 * @head: pointer
 * @line: number line
 */
void print_node(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	if (head)
		printf("%d\n", aux->n);
}
