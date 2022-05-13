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
	for (i = 0; number[i]; i++)
	{
		if (number[0] == '-')
			i++;
		if (number[i] < 48 || number[i] > 57)
			return (0);
	}
	return (1);
}
/**
 * execute - functions
 * @funcion: pointer to function
 * @head: pointer
 * @n: string
 * @line: number of line
 * Return: 1 or 0
 */
int execute(instruction_t funcion, stack_t **head, char *n, unsigned int line)
{
	unsigned int num = 0;
	int let = 0;

	if (funcion.f == add_node)
	{
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
	}
	if (funcion.f == print_list)
		print_list(head, line);
	return (0);
}
