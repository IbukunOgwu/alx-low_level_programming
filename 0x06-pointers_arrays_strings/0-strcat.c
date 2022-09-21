#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * Null byte - put at the end of the string
 * @dest: a pointer that we concatenate on
 * @src: the source string to be added to @dest
 * Return: a pointer to the string @dest
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0, i;
while(dest[dlen])
{
dlen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}
