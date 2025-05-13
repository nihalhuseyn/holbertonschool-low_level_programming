#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - functions are used to duplicate a string
 *
 * @str: - string
 *
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	array = malloc((len + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
