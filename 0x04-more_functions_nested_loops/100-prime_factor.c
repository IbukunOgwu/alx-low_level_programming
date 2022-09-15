#include <stdio.h>
#include <math.h>

/**
 * main - program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 10)
		{
			maxf = number / x;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
