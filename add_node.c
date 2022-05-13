#include "monty.h"
/**
 * add_node - add node
 * @head: pointer
 * @n: number
 */
void add_node(stack_t **head, unsigned int n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = *head;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
}
