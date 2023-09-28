#include "main.h"
#include <stdio.h>

int factorial(int n);

/**
 * factorial - Implementation of the factorial function.
 * @n: The number to calculate the factorial of.
 * Return: integer. 
 */

int factorial(int n)
{
  if (n < 0)
    {
      return (-1);
    }
  else if (n == 0)
    {
      return (1);
    }
  else
    {
      return (n * factorial(n - 1));
    }
}
