#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if ('A' <= c && c <= 'Z')
{
return (1);
}
return (0);
}
