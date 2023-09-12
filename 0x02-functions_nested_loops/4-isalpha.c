#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _isalpha(int c);

/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is letter, 0 otherwise
 */

int _isalpha(int c)
{
  if (isalpha(c))
    return (1);
  else
    return (0);
}
