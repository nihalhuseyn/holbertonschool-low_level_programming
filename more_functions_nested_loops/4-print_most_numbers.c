#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Description: This function prints all the numbers from 0 to 9
 * and then prints a new line.
 */

void print_most_numbers(void)
{
char numbers[] = "01356789";
int i = 0;
while (numbers[i] != '\0')
{
_putchar(numbers[i]);
i++;
}
_putchar('\n');
}
