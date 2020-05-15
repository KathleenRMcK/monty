#include "monty.h"
/**
 * main - Project main for monty
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	stack_t **stack_help;

	stack_help = malloc(sizeof(stack_t));
	*stack_help = NULL;

	(void)global;
	if (argc >= 2 && argc <= 3)
		read_help(argv[1], stack_help);
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	free(stack_help);
	return (0);
}
