#include "main.h"
#include <stdio.h>

int _strlen(char *s);
void rev_string(char *s);

/**
 * reverses the string pointed to by s
 *
 * @s: a pointer to the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
  char *start = s;
  char *end = s + _strlen(s) - 1;
  while (start < end)
    {
      char tmp = *start;
      *start = *end;
      *end = tmp;
      start++;
      end--;
    }
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
