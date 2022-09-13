#include "main.h"

/**
 * times_table - print times table from 0 to 9
 * description: function that prints 9 times table, starting with zero
 * Return: void (success)
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i + j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			else if (res < 10 && j != 10)
			{
				_putchar(' ');
				_putchar('0' + (res % 10));
			}
			else
				_putchar('0' + (res % 10));
		}
		_putchar('\n');
	}
}
