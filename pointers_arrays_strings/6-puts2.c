#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pointer
 * Return: Always 0
 */

void puts2(char *str)
{
	int a = 0;
	int l;

	while (*(str + a) != '\0')
	{
		a++;
	}
	l = a;

	for (a = 0; a < l; a += 2)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
