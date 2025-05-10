#include <stdio.h>

/**
 * _isdigit - checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if the character is digit, 0 otherwise.
 */
int _isdigit(int c)
{
if ('0' <= c && c <= '9')
{
return (1);
}
return (0);
}
