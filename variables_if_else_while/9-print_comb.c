#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Print the digit as a character */
		if (i < 9)
		{
			putchar(',');      /* Print comma */
			putchar(' ');      /* Print space */
		}
	}
	putchar('\n');     /* Print new line */

	return (0);
}
