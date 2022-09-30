#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * description - function taht computes the absolute value of integer
 * @i: integer to be converted
 * Return: gives the absolute value of the number inputed
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
