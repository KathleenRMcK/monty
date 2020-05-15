#include "monty.h"
int global;

/**
 * _push - Function to process push
 * @stack: receiving stack
 * @line_number: receiving number
 * Return: 0
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *stack_help;

	stack_help = malloc(sizeof(stack_t));

	(void)line_number;
	if (!stack_help)
		return;

	stack_help->n = global;
	stack_help->next = *stack;
	stack_help->prev = NULL;

	if (*stack)
		(*stack)->prev = stack_help;
	*stack = stack_help;
}
