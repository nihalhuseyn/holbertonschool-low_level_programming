#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print digits from 0 to 9 */
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	/* Print a newline at the end */
	printf("\n");
	return (0);
}
