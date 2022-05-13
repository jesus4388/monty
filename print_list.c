#include "monty.h"
/**
 * print_list - print list
 * @head: pointer
 * @line: number line
 */
void print_list(stack_t **head, unsigned int line)
{
	int i = 0;
	stack_t *aux = *head;
	(void) line;

	for (i = 0; aux != NULL; i++)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
