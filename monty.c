#include "monty.h"
/**
 * check_function - check functions
 * @comand: string
 * Return: funcion or NULL
 */
void (*check_function(char *comand))(stack_t **head, unsigned int line)
{
	int i = 0;
	instruction_t funcion;

	instruction_t selector[] = {
		{"push", add_node},
		{"pall", print_list},
		{NULL, NULL}
	};
	for (i = 0; i < 2; i++)
	{
		if (strcmp(comand, selector[i].opcode) == 0)
		{
			funcion.f = selector[i].f;
			return (funcion.f);
		}
	}
	return (NULL);
}
/**
 * tokenizador - tokenizador
 * @head: pointer;
 * @buffer: line
 * @line: number of line
 * Return: 0 or -1
 */
int tokenizador(stack_t **head, char *buffer, unsigned int line)
{
	char *comand = NULL;
	char *number = NULL;
	int num = 0;
	instruction_t funcion;

	comand = strtok(buffer, "\n\t ");
	number = strtok(NULL, "\n\t ");
	if (comand == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, comand);
		return (-1);
	}
	funcion.f = check_function(comand);
	if (funcion.f)
	{
		num = execute(funcion, head, number, line);
		if (num == -1)
			return (-1);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, comand);
		return (-1);
	}
	return (0);
}
/**
 * main - monty
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	FILE *fp;
	char *buffer = NULL, *copy = NULL;
	size_t size = 0;
	unsigned int line = 1;
	int num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "rw+");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &size, fp) != -1)
	{
		line++;
		copy = strdup(buffer);
		copy[strlen(copy) - 1] = '\0';
		if (strlen(copy) > 2)
			num = tokenizador(&head, copy, line);
		if (num == -1)
			break;
		free(copy);
	}
	free(buffer);
	fclose(fp);
	free_listint(head);
	if (num != -1)
		return (0);
	free(copy);
	exit(EXIT_FAILURE);
}
