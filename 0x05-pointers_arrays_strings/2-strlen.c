#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: is the string
 * Return: Length of string
 */

int _strlen(char *s);
{
int i = 0;
while (s[i])
	i++;
return (i);
}
