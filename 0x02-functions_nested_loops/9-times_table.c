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
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if ((res / 10) > '0')
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((res % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
			_putchar('\n');
		}
}
