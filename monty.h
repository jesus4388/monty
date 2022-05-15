#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void add_node(stack_t **head, unsigned int n);
int execute(instruction_t funcion, stack_t **head, char *n, unsigned int line);
void print_list(stack_t **head, unsigned int line);
void free_listint(stack_t *head);
void print_node(stack_t **head, unsigned int line);
int check_add(stack_t **head, char *n, unsigned int line);
int check_digit(char *number);
int check_node(stack_t **head, unsigned int line);
void remove_node(stack_t **head, unsigned int line);
int check_pop(stack_t **head, unsigned int line);
void swap_node(stack_t **head, unsigned int line);
int check_swap(stack_t **head, unsigned int line);
void sum_node(stack_t **head, unsigned int line);
int check_sum(stack_t **head, unsigned int line);
void nothing(stack_t **head, unsigned int line);
void sub_node(stack_t **head, unsigned int line);
int check_sub(stack_t **head, unsigned int line);
void div_node(stack_t **head, unsigned int line);
int check_div(stack_t **head, unsigned int line);
void mul_node(stack_t **head, unsigned int line);
int check_mul(stack_t **head, unsigned int line);
void mod_node(stack_t **head, unsigned int line);
int check_mod(stack_t **head, unsigned int line);
void coment(stack_t **head, unsigned int line);
void print_char(stack_t **head, unsigned int line);
int check_pchar(stack_t **head, unsigned int line);
void all_char(stack_t **head, unsigned int line);
#endif
