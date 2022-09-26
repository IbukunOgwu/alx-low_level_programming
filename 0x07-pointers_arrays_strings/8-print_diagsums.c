#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix of which we print the sum of the diagonals
 * @size: size of the matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
int i, sum = 0, sum1 = 0;
for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
	sum += *(a + i);
if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
	sum1 += *(a + i);
}
printf("%d, %d\n", sum, sum1);
}
