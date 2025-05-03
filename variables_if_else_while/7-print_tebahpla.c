#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);  /* Печатаем каждую букву */
	}

	putchar('\n');  /* Печатаем новую строку */

	return (0);
}
