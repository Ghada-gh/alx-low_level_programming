#include "main.h"
#include <stdio.h>

int _strlen(char *s);
void puts_half(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: a pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
  int len = _strlen(str);
  int half = len / 2;
  if (len % 2 == 1)
    half++;
  for (int i = half; i < len; i++)
    putchar(str[i]);
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

  while (*s != '\0')
    {
      len++;
      s++;
    }
  return (len);
}
