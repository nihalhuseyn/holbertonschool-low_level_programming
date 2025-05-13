#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - prototype for concatenates two strings
 *
 * @s1: - string
 * @s2: - string
 * @n: - n
 *
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	if (n >= len2)
	{
		n = len2;
	}
	new_string = malloc((len1 + n + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_string[j + i] = s2[j];
	}
	new_string[i + n] = '\0';
	return (new_string);
}
