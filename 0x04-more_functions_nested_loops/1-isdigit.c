#include "main.h"

/**
 * _isdigit - check whether the input is a digit
 * @c: character to check
 *
 * Return: 0 and 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
