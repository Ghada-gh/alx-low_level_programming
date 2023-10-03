#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
  char *array;
  unsigned int i;

  if (size == 0)
    {
      return (NULL);
    }
  array = malloc(size * sizeof(char));
  if (array == NULL)
    {
      return (NULL);
    }
  i = 0;
  while (i < size)
    {
      array[i] = c;
      i++;
    }
  return (array);
}
