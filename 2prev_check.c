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
			sum_node(head, line);
		else
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		return (-1);
	}
	return (0);
}
/**
 * nothing - nothing
 * @head: pointer
 * @line: number of line
 */
void nothing(stack_t **head, unsigned int line)
{
	(void) *head;
	(void) line;
}
/**
 * check_sub - check sub
 * @head: pointer
 * @line: number of line
 * Return: 0 or 1
 */
int check_sub(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	int i = 0;

	if (*head != NULL)
	{
		for (i = 0; aux != NULL; i++)
			aux = aux->next;
		if (i > 1)
			sub_node(head, line);
		else
		{
			fprintf(stderr, "L%d: can't sub, stack too short\n", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		return (-1);
	}
	return (0);
}
/**
 * check_div - check function
 * @head: pointer
 * @line: number of line
 * Return: 0 or 1
 */
int check_div(stack_t **head, unsigned int line)
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
			div_node(head, line);
		else
		{
			fprintf(stderr, "L%d: can't div, stack too short", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short", line);
		return (-1);
	}
	return (0);
}
