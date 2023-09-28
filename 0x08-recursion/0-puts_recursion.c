#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s);

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: A pointer to the string to be printed.
 * Return: None.
 */

void _puts_recursion(char *s)
{
  if (*s != '\0')
    {
      putchar(*s);
      _puts_recursion(s + 1);
  }
  else
    {
      putchar('\n');
    }
}
