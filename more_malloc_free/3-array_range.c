#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  creates an array of integers.
 * @min: min size
 * @max: max size
 *
 * Return: always 0
 */
int *array_range(int min, int max)
{
int *arr;
int i = 0;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; i < max - min + 1; i++)
{
arr[i] = min + i;
}
return (arr);
}
