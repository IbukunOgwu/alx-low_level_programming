#include "stdio.h"
#include "main.h"

/**
 * main - fibonacci sequence
 * description - prints a sequence
 * Return: void, Always (success)
 */
int main(void)
{
long int n1, n2, fn, total;
n1 = 1;
n2 = 2;
fn = total = 0;
while (fn <= 4000000)
{
fn = n1 + n2;
n1 = n2;
if ((n1 % 2) == 0)
{
total += n1;
}
}
printf("%ld\n", total);
return (0);
}
