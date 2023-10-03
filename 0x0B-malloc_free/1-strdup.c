#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str);

/**
 * _strdup - creates a new string which is a duplicate of the string str.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
  char *dup;
  size_t len;

  if (str == NULL)
    {
      return (NULL);
    }
  len = strlen(str);
  dup = malloc(len + 1);
  if (dup == NULL)
    {
      return (NULL);
    }
  strcpy(dup, str);
  return (dup);
}
