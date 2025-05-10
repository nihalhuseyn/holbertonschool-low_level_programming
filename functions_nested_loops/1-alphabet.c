#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char shukur = 'a';

	while (shukur <= 'z')
	{
		_putchar(shukur);
		shukur++;
	}
	_putchar('\n');
}
