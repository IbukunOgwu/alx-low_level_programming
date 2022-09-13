#include "main.h"

/**
 * main-prints alphabets in small letters
 *
 * description: lower cases alphabets
 *
 * Return: void (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
