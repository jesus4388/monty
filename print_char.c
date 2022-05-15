#include "monty.h"
/**
 * print_char - print char
 * @head: pointer
 * @line: number of line
 */
void print_char(stack_t **head, unsigned int line)
{
	(void) line;

	printf("%c\n", (*head)->n);
}
