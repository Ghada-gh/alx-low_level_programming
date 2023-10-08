#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *ptr;
  unsigned int total_size;

  if (nmemb == 0 || size == 0)
    {
      return (NULL);
    }

  total_size = nmemb * size;
  ptr = malloc(total_size);

  if (ptr == NULL)
    {
      return (NULL);
    }

  memset(ptr, 0, total_size);
  return (ptr);
}
