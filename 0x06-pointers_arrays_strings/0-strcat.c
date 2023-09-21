#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src);

/**
 * _strcat - concatenates two strings
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
  int i, j;

  for (i = 0; dest[i] != '\0'; i++)
		;
  for (j = 0; src[j] != '\0'; j++)
    dest[i + j] = src[j];
  dest[i + j] = '\0';
  return (dest);
}
