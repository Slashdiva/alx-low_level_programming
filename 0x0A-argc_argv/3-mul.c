#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * Your program should print the result of the multiplication
 * You can assume that the two numbers and result of the multiplication
 *  can be stored in an integer
 *
 * @argc: This is argument count
 * @argv: This is argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication *atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
