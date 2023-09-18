#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * int _strlen - a function that returns the length of a string.
 * @s: a string
 *
 * Return: void
 */

int _strlen(char *s)
{
  int len = 0;

  while (*s != '\0') {
    len++;
    s++;
  }
  return len;
}
