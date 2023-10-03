#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2);

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
  char *s;
  size_t len1, len2;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  len1 = strlen(s1);
  len2 = strlen(s2);
  s = malloc(len1 + len2 + 1);
  if (s == NULL)
    return (NULL);
  strcpy(s, s1);
  strcpy(s + len1, s2);
  return (s);
}
