#include "main.h"
/**
 * _islower - Entry point
 * @a: variable
 * Return: Always 0 (Success)
 */
int _islower(int a)
{
	if (a >= 97 && a <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
