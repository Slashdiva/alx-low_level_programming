#include <stdio.h>

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
	printf("%d\n", argc + 1);
	(void)argv;
	return (0);
}
