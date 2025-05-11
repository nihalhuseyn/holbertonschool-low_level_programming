#include "main.h"
/**
 * _strncpy - check the code
 * @dest: - input of function
 * @src: - src
 * @n: - n
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int a = 0, b = 0, c = 0;

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	while (src[c] != '\0')
	{
		c++;
	}

	if (n > c)
	{
		n = c;
	}

	while (b < n)
	{
		if (src[0] == '\0')
		{
			break;
		}

		*(dest + b) = *(src + b);
		b++;
	}

	return (dest);
}
