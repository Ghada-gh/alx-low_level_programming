#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
  int *ptr, i;

  if (min > max)
    {
      return (NULL);
    }

  ptr = malloc((max - min + 1) * sizeof(int));
  if (ptr == NULL)
    {
      return (NULL);
    }

  for (i = min; i <= max; i++)
    {
      ptr[i - min] = i;
    }

  return (ptr);
}
