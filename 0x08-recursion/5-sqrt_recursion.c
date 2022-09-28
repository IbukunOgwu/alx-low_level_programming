#include "main.h"

/**
 * sqrt_check - checks for the square root of the number b
 * @a: number
 * @b: number to find its square root
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int sqrt_check(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
return (sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to find the square root of
 * Return: natural sqaure root or -1
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
