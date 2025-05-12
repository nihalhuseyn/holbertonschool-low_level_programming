#include "main.h"
#include <stdio.h>
/**
 * _prime_number - check the code
 * @x: number
 * @y: divide
 * Return: Always 0.
 */
int _prime_number(int x, int y)
{
	if (x / 2 < y)
		return (1);
	if (x % y == 0 && x != y)
		return (0);
	else
		return (_prime_number(x, y + 1));
}
/**
 * is_prime_number - check the code
 * @n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime_number(n, 2));
}
