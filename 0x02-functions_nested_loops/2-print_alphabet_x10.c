#include "main.h"

/**
 * print_alphabet_x10 - shows the alphabet 10 times
 *
 * Description - prints alphabet 10 plac
 * Return: void (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
