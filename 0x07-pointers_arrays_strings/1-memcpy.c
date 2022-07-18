#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination array
 * @src: a char pointer
 * @n: an integer
 * Return: a dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = *src;

	return (dest);
}
