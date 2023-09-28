#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);

/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: A pointer to the string whose length is to be calculated.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
  if (*s == '\0')
    {
      return 0;
    }
  else
    {
      return 1 + _strlen_recursion(s + 1);
    }
}
