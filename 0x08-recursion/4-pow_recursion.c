#include "main.h"
#include <stdio.h>

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - Implementation of the power function using recursion.
 * @x: The base number.
 * @y: The exponent.
 * Return: The value of x raised to the power of y, or -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
  if (y < 0)
    {
      return (-1);
    }
  else if (y == 0)
    {
      return (1);
    }
  else
    {
      return (x * _pow_recursion(x, y - 1));
    }
}
