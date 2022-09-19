#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: int type array pointer
 * @n: int type integer
 * Description: numbers must be separated by commas and spaces
 * Numbers should be displayed in the same order they are in the array
 */

void print_array(int *a, int n)
{
int i;
i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
