#include "main.h"

/**
 * _strlen -length of a string
 *
 * Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
