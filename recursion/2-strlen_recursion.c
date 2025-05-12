#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
