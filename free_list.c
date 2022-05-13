#include "monty.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer.
 * Return: nothing
 */
void free_listint(stack_t *head)
{
	stack_t *aux1 = head;
	stack_t *aux2 = NULL;

	if (head)
	{
		for (; aux1;)
		{
			aux2 = aux1;
			aux1 = aux1->next;
			free(aux2);
		}
	}
}
