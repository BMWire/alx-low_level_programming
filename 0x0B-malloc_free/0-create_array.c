#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array
 *
 * Return: pointer to the array or NULL if malloc fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
{
return NULL;
}

a = malloc(sizeof(char));

if (a == NULL)
{
return NULL;
}

for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
