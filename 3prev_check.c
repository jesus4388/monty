#include "monty.h"
/**
 * check_mod - check function
 * @head: pointer
 * @line: number of line
 * Return: 0 or -1
 */
int check_mod(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	int i = 0;

	if (*head != NULL)
	{
		if ((*head)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line);
			return (-1);
		}
		for (i = 0; aux != NULL; i++)
			aux = aux->next;
		if (i > 1)
			mod_node(head, line);
		else
		{
			fprintf(stderr, "L%d: can't mod, stack too short\n", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line);
		return (-1);
	}
	return (0);
}
/**
 * coment - coment
 * @head: pointer
 * @line: number of line
 */