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

	if (funcion.f == add_node)
		if (check_add(head, n, line) == -1)
			return (-1);
	if (funcion.f == print_list)
		print_list(head, line);
	if (funcion.f == print_node)
		if (check_node(head, line) == -1)
			return (-1);
	if (funcion.f == remove_node)
		if (check_pop(head, line) == -1)
			return (-1);
	if (funcion.f == swap_node)
		if (check_swap(head, line) == -1)
			return (-1);
	if (funcion.f == sum_node)
		if (check_sum(head, line) == -1)
			return (-1);
	if (funcion.f == nothing)
		nothing(head, line);
	return (0);

}
