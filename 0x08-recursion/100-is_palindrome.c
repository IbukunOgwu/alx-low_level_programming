#include "main.h"

/**
 * _strlen_recursion - this will obtain the lenght of a string
 * @s: string
 * Return: 1 if success, otherwise if error, -1
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - this will compare the string against the reverse string
 * @s: string
 * @a: smallest iterator
 * @b: biggest iterator
 * Return: 1 on success, if error, return -1
 */

int comparator(char *s, int a, int b)
{
if (*(s + a) == *(s + b))
{
if (a == b || a == b + 1)
return (1);
else
return (0 + comparator(s, a + 1, b - 1));
}
return (0);
}

/**
* is_palindrome - a function that checks if a string is a palindrome or not
* @s: string to check
* Return: 1 on success, -1 on error
*/

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
else
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
