#include "monty.h"
/**
 * read_help - Form of read_file
 * @input: string
 * @stack: stack
 * Return: 0
 */
void read_help(char *input, stack_t **stack)
{
	int parse;
	size_t buffer;
	FILE *file = fopen(input, "r");

	if (file)
	{
		/* loop here*/
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", input);
		exit(EXIT_FAILURE);
	}

}
