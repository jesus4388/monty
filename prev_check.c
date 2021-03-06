#include "monty.h"
/**
* check_digit -  check digit
* @number: string
* Return: yes or no
*/
int check_digit(char *number)
{
	int i = 0;

	if (number == NULL)
		return (0);
	if (number[i] == '-')
		i++;
	for (i = i; number[i]; i++)
	{
		if (number[i] < 48 || number[i] > 57 || number[i] == '-')
		return (0);
	}
	return (1);
}
/**
 * check_add - check function
 * @head: pointer
 * @n: number
 * @line: number line
 * Return: 0 or -1
 */
int check_add(stack_t **head, char *n, unsigned int line)
{
	int let = 0, num = 0;

	let = check_digit(n);
	if (let == 1)
	{
		num = atoi(n);
		add_node(head, num);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		return (-1);
	}
	return (0);
}
/**
 * check_node - check function
 * @head: pointer
 * @line: number line
 * Return: 0 or -1
 */
int check_node(stack_t **head, unsigned int line)
{
	if (*head != NULL)
		print_node(head, line);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		return (-1);
	}
	return (0);
}
/**
 * check_pop - remove node
 * @head: pointer
 * @line: number line
 * Return: -1 or 0
 */
int check_pop(stack_t **head, unsigned int line)
{
	if (*head != NULL)
		remove_node(head, line);
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		return (-1);
	}
	return (0);
}
/**
 * check_swap - funcion swap
 * @head: pointer
 * @line: number line
 * Return: -1 or 0
 */
int check_swap(stack_t **head, unsigned int line)
{
	stack_t *aux = *head;
	int i = 0;

	if (*head != NULL)
	{
		for (i = 0; aux != NULL; i++)
			aux = aux->next;
		if (i > 1)
			swap_node(head, line);
		else
		{
			fprintf(stderr, "L%d: can't swap, stack too short\n", line);
			return (-1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		return (-1);
	}
	return (0);
}
