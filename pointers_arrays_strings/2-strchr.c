#include "main.h"
/**
 * _strchr - check the code
 * @s: - s
 * @c: - c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
