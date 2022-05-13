#include "monty.h"
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
	int let = 0, nod = 0;

	if (funcion.f == add_node)
	{
		let = check_add(head, n, line);
		if (let == -1)
			return (-1);
	}
	if (funcion.f == print_list)
		print_list(head, line);
	if (funcion.f == print_node)
	{
		nod = check_node(head, line);
		if (nod == -1)
			return (-1);
	}
	return (0);

}
