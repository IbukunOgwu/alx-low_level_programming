#include <stdio.h>

/**
 * main - program that prints numbers from 1 to 100,
 * followed by a new line
 * 3 multiples to print Fizz
 * 5 multiples to print Buzz
 * 3 and 5 joins FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
