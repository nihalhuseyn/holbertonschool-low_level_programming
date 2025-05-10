#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers from 0 to 14, followed by a new line,
 * 10 times.
 *
 * Description: This function prints all the numbers from 0 to 14, followed by
 * a new line, 10 times.
 */
void more_numbers(void)
{
int i, j;
char nums[] = "01234567891011121314\n";
for (j = 0; j < 10; j++)
{
for (i = 0; nums[i] != '\0'; i++)
{
_putchar(nums[i]);
}
}
}
