#include "main.h"

/**
 * print_alphabet -prints alphabets in small letters
 *
 * description: prints alphabets with _putchar
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
