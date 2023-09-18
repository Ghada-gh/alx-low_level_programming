#include "main.h"
#include <stdio.h>

int _strlen(char *s);
void print_rev(char *s);

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a string.
 *
 * Return: void
 */
void print_rev(char *s)
{
  int len = _strlen(s);
  int i = len - 1;

  while (i >= 0)
    {
      putchar(s[i]);
      i--;
    }
  putchar('\n');
}

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
  int len = 0;

  while (*s != '\0') {
    len++;
    s++;
  }
  return (len);
}
