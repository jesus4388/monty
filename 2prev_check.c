#include "monty.h"
/**
 * check_sum - check function
 * @head: pointer
 * @line: number of line
 * Return: 0 or -1
 */
int check_sum(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	int i = 0;

	if (*head != NULL)
	{
		for (i = 0; aux != NULL; i++)
			aux = aux->next;
		if (i > 1)
		{
			sum_node(head, line);
		}
		else
		{
			fprintf(stderr, "L%d: can't add, stack too\n", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too\n", line);
		return (-1);
	}
	return (0);
}
