#include "function_pointers.h"
#include <stdio.h>


/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;

  if (size <= 0)
    return (-1);
  for (i = 0; i < size; i++)
    if (cmp(array[i]))
      return (i);
  return (-1);
}
