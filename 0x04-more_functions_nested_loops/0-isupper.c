#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return 0 if c is not uppercase, 1 if it is
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
