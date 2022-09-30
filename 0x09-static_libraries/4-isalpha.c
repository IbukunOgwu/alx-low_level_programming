#include "main.h"

/**
 * _isalpha - checks letters of alphabet
 * Description - function that checks alphabetic characters
 * @c: characters to be checked
 * Return: 1 if the letter is an english one, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
