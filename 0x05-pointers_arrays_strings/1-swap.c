#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b);

/**
 * swap_int - swaps the values of two integers.
 * @a: an integer.
 * @b: an integer.
 * Return: void
 */

void swap_int(int *a, int *b)
{
  int temp = *a;

  *a = *b;
  *b = temp;
}
