#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the newly allocated space in memory
 * containing s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *concat;
  unsigned int len_s1, len_s2;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  len_s1 = strlen(s1);
  len_s2 = strlen(s2);

  if (n > len_s2)
    n = len_s2;

  concat = malloc(sizeof(char) * (len_s1 + n + 1));
  if (concat == NULL)
    return (NULL);

  strcpy(concat, s1);
  strncpy(concat + len_s1, s2, n);
  concat[len_s1 + n] = '\0';

  return (concat);
}
