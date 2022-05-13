#include "monty.h"
/**
 * check_digit -  check digit
 * @number: string
 * Return: yes or no
 */
char *check_digit(char *number)
{
	int i = 0;
	char *si = "si";
	char *no = "no";

	for (i = 0; number[i]; i++)
	{
		if (number[0] == '-')
			i++;
		if (number[i] < 48 || number[i] > 57)
			return (no);
	}
	return (si);
}
/**
 * execute - functions
 * @funcion: pointer to function
 * @head: pointer
 * @n: string
 * @line: number of line
 */
void execute(instruction_t funcion, stack_t **head, char *n, unsigned int line)
{
	unsigned int num = 0;
	char *let = NULL;
	int i = 0;

	if (funcion.f == add_node)
	{
		let = check_digit(n);
		if (let == "si")
		{
			num = atoi(n);
			add_node(head, num);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
	}
	if (funcion.f == print_list)
		print_list(head, line);
}
