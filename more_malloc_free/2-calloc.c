#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
/**
 * _calloc - prototype for allocates memory for an array, using malloc
 * @size: - size of array
 * @nmemb: - nmemb
 *
 * Return: always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *byte_ptr;
unsigned int total_size = 0, i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

byte_ptr = ptr;
for (i = 0; i < total_size; ++i)
{
byte_ptr[i] = 0;
}
return (ptr);
}
