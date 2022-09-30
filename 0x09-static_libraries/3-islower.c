#include "main.h"

/**
 * _islower - checks maybe is lowercase character
 *
 * Description: prints english alphabet lower cases
 * Return: 1 if it is lower case, 0 if otherwise
 * @c: character to test
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
