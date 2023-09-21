#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenates two strings
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
  int i, j;
  for (i = 0; dest[i] != '\0'; i++)
   ;
  for (j = 0; src[j] != '\0' && j < n; j++)
    dest[i + j] = src[j];
  dest[i + j] = '\0';
  return (dest);
}
