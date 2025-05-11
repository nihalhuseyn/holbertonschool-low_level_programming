#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates
 * @s: string
 * @c: char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (*(s + i))
	{
		i++;
	}
	j = i;
	i = 0;
	while (*(s + i) != c && i <= j)
	{
		i++;
	}


	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
