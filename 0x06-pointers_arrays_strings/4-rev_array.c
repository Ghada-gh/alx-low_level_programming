#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
  int i, j, tmp;

  for (i = 0, j = n - 1; i < j; i++, j--)
    {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
}
