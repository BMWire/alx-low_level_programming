#include "main.h"

/**
 * print_square - print a square in the terminal
 * @size: number of times # is printed
 *
 * Return: void
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
