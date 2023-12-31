#include "main.h"

/**
 * main - entry point of th shell
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 if success
 */
int main(int argc, char **argv)
{
	char *lineptr;
	size_t size;
	int counter;

	(void)argc;
	counter = 0;
	signal(SIGINT, _signal_ignore);
	do {
		counter++;
		lineptr = NULL;
		size = 0;
		_prompt(lineptr, size, counter, argv);

	} while (1);

	return (0);
}
