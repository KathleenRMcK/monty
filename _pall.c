#include "monty.h"
/**
 * _pall - monty pall
 * @stack: receiving stack
 * @line_number: recieving number
 * Return: 0
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *stack_help;

	stack_help = *stack;
	(void) line_number;

	if (!stack_help)
		return;

	while (stack_help)
	{
		printf("%d\n", stack_help->n);
		stack_help = stack_help->next;
	}
}
