#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	while (x < 24)
	{
		while (y < 60)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			_putchar(':');
			if (y < 10)
			{
				_putchar('0');
				_putchar(y % 10 + '0');
			}
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
		y++;
		_putchar('\n');
		}
		x++;
		y = 0;
	}
}
