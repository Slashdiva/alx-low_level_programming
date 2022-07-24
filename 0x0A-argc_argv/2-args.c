#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: This is argument count
 * @argv: This is argument vector
 *
 * Return: This returns to 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
