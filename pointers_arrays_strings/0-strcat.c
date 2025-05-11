#include "main.h"
/**
 * _strcat - check the code
 * @dest: - input of function
 * @src: - src
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int a = 0, b = 0, c = 0;

while (dest[a] != '\0')
{
a++;
}
for (b = 0; src[b] != '\0'; b++)
{
}
for (c = 0; c <= a; c++)
{
dest[b + 2 + c] = src[c];
}
return (dest);
}
