#include <stdio.h>

/**
 * main - write a program tht prints the number of arguments pased into it
 *
 * @argc: This is the argument count
 * @argv: this is the argument vector
 *
 * Return: This return to 0
 *
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
