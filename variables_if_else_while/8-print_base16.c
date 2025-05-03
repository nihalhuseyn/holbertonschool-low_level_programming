#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print numbers from 0 to f in hexadecimal */
	int i;

	char hex_digits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);  /* Print each character */
	}

	putchar('\n');  /* Print a newline */

	return (0);
}
