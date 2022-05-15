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
 * check_pchar - check pchar
 * @head: pointer
 * @line: number of line
 * Return: 0 or -1
 */
int check_pchar(stack_t **head, unsigned int line)
{
	if (*head != NULL)
		if ((*head)->n >= 32 && (*head)->n <= 126)
			print_char(head, line);
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
			return (-1);
		}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		return (-1);
	}
	return (0);
}
/**
 * all_char - print char
 * @head: pointer
 * @line: number of line
 */
void all_char(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	(void) line;

	if (*head != NULL)
	{
		while (aux != NULL)
		{
			if (aux->n == 0)
				break;
			if (aux->n >= 32 && aux->n <= 126)
			{
				printf("%c", aux->n);
				aux = aux->next;
			}
			else
				break;
		}
		printf("\n");
	}
	else
		printf("\n");
}
