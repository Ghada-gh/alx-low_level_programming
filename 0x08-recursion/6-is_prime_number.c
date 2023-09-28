#include "main.h"
#include <stdio.h>
#include <math.h>

int is_prime_number(int n);
int is_prime_number_recursive(int n, int divisor);

/**
 * is_prime_number_recursive - Checks if an integer is a prime number.
 * @n: The integer to check.
 * @divisor:base case 1
 * Return: 1 if n is a prime number, otherwise 0.
 */


int is_prime_number_recursive(int n, int divisor)
{
 
  if (n < 2)
    {
      return (0);
    }
  if (divisor == 1)
    {
      return (1);
    }
  if (n % divisor == 0)
    {
      return (0);
    }
  return is_prime_number_recursive(n, divisor - 1); 
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
    return is_prime_number_recursive(n, n - 1);
}
