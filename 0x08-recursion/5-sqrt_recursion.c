#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);
int sqrt_recursive(int n, int guess)

/**
 * sqrt_recursive - Implementation of the natural square root function using recursion.
 * @guess: base case.
 * @n: The number to calculate the natural square root of.
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */

int sqrt_recursive(int n, int guess)
{
  if (n < 0)
    {
      return (-1);
    }
  if (guess * guess == n)
    {
      return (guess);
    }
  if (guess * guess > n)
    {
      return sqrt_recursive(n, guess - 1);
	}
  return sqrt_recursive(n, guess + 1);
}

/**
 * _sqrt_recursion - function that calculates the square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
  return sqrt_recursive(n, 0);
}
