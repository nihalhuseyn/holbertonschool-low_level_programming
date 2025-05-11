#include "main.h"
/**
 * _puts - Entry point
 * @str: description for str
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
