#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);

/**
 * print_array - Prints the first n elements of an array of integers, followed by a new line.
 * @a: The array of integers to be printed.
 * @n: The number of elements of the array to be printed.
 * Return: void.
 */
void print_array(int *a, int n)
{
  int i;

  for (i = 0; i < n; i++)
    {
      printf("%d, ", a[i]);
    }
  printf("\n");
}
