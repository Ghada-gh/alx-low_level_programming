#include "main.h"
#include <stdio.h>

void _print_rev_recursion(char *s);

/**
 * _print_rev_recursion - This function prints a string in reverse.
 * @s: A pointer to the string to be printed.
 * Return: None.
 */

void _print_rev_recursion(char *s)
{
  if (*s != '\0')
    {
      _print_rev_recursion(s + 1);
      putchar(*s);
    }
}
