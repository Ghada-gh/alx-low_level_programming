#include "main.h"
#include <stdio.h>

void rev_string(char *s);

/**
 * rev_string - prints every other character of a string, starting with the first character,
 * followed by a new line
 *
 * @str: a pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
  int i = 0;

  while (str[i] != '\0')
    {
      putchar(str[i]);
      i += 2;
    }
  putchar('\n');
}
