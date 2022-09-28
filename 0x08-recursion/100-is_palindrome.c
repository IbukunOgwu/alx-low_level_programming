#include "main.h"

/**
 * palind_a - this will obtain the lenght of a
 * @a: string
 * @l: the integer where lenght will be counted
 * Return: 1 if success, otherwise if error, -1
 */
int palind_a(char *a, int l)
{
if (*a == 0)
	return (l - 1);
return (palind_a(a + 1, l + 1));
}

/**
 * palind_b - this will compare the string against the reverse string
 * @a: string
 * @l: length
 * Return: 1 on success, if error, return -1
 */

int palind_b(char *a, int l)
{
if (*a != *(a + 1))
return (0);
else if (*a == 0)
return (1);
return (palind_b(a + 1, l - 2));
}

/**
* is_palindrome - a function that checks if a string is a palindrome or not
* @s: string to check
* Return: 1 on success, -1 on error
*/

int is_palindrome(char *s)
{
int l;
l = palind_a(s, 0);
return (palind_b(s, l));
}
