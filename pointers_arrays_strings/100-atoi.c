#include "main.h"
/**
 * _atoi - check the code
 * @s: - input of function
 * Return: Always 0.
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int num = 0;
while (s[i] != '\0')
{
if (s[i] == 45)
{
sign = sign * -1;
}
if (s[i] >= 48 && s[i] <= 57)
{
num = num * 10;
num = num + s[i] - 48;
}
else
{
if (num != 0)
{
break;
}
}
i++;
}
num *= sign;
return (num);
}
