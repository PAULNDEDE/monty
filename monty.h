#ifndef MONTY_HEADER_FILE
#define MONTY_HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_fns(stack_t **head, unsigned int number);
void pall_fns(stack_t **head, unsigned int number);
void pint_fns(stack_t **head, unsigned int number);
int execution_fns(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack_fns(stack_t *head);
void pop_fns(stack_t **head, unsigned int counter);
void swap_fns(stack_t **head, unsigned int counter);
void add_fns(stack_t **head, unsigned int counter);
void nope_fns(stack_t **head, unsigned int counter);
void subract_fns(stack_t **head, unsigned int counter);
void div_fns(stack_t **head, unsigned int counter);
void mul_fns(stack_t **head, unsigned int counter);
void mod_fns(stack_t **head, unsigned int counter);
void print_char_fns(stack_t **head, unsigned int counter);
void print_string_fns(stack_t **head, unsigned int counter);
void rotate_fns(stack_t **head, unsigned int counter);
void rotate_bottom_fns(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode_fns(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void queue_fns(stack_t **head, unsigned int counter);
void stack_fns(stack_t **head, unsigned int counter);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
