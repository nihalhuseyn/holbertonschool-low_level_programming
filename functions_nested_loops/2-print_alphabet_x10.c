#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char kamal = 'a';
	int a = 0;

	while (a < 10)
	{
		while (kamal <= 'z')
		{
			_putchar(kamal);
			kamal++;
		}
		_putchar('\n');
		a++;
		kamal = kamal - 26;
	}
}
