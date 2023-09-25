#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c);

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
  while (*s != '\0')
    {
      if (*s == c)
	return (s);
      s++;
    }
  return (NULL);
}
