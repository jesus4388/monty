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
		if (check_sum(head, line))
			return (-1);
	if (funcion.f == nothing)
		nothing(head, line);
	if (funcion.f == sub_node)
		if (check_sub(head, line) == -1)
			return (-1);
	if (funcion.f == div_node)
		if (check_div(head, line) == -1)
			return (-1);
	if (funcion.f == mul_node)
		if (check_mul(head, line) == -1)
			return (-1);
	if (funcion.f == mod_node)
		if (check_mod(head, line) == -1)
			return (-1);
	if (funcion.f == print_char)
		if (check_pchar(head, line) == -1)
			return (-1);
	if (funcion.f == all_char)
		all_char(head, line);
	return (0);
}
