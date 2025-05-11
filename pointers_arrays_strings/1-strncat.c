#include "main.h"
/**
 * _strncat - check the code
 * @dest: - input of function
 * @src: - src
 * @n: - n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, c = 0;

for (a = 0; dest[a] != '\0'; a++)
{
}
for (c = 0; c < n; c++)
{
dest[a + c] = src[c];
if (src[c] == '\0')
{
break;
}
}
return (dest);
}
