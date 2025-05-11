#include "main.h"
/**
 * swap_int - Entry point
 * @a: description for a
 * @b: description for b
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
