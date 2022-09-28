#include "main.h"

/**
 * prime_check - this checks if the number is a prime number
 * @a: the factor to be checked
 * @b: the likely prime number
 * Return: 1 of the number is a prime number or 0 if otherwise
 */

int prime_check(int a, int b)
{
if (b < 2 || b % a == 0)
	return (0);
else if (a > b / 2)
	return (1);
else
	return (prime_check(a + 1, b));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to be checked
 * Return: 1 if it is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime_check(2, n));
}
