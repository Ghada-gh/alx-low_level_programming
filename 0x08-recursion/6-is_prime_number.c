#include "main.h"
#include <stdio.h>
#include <math.h>

int is_prime_number(int n);
double my_sqrt(double x);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
  int i;
  
  if (n <= 1)
    {
      return (0);
    }
  for (i = 2; i <= my_sqrt(n); i++)
    {
      if (n % i == 0)
	{
	  return (0);
        }
    }
  return (1);
}

double my_sqrt(double x)
{
  double guess = x / 2;
  double epsilon = 0.0001;

  while (guess * guess - x > epsilon)
    {
      guess = (guess + x / guess) / 2;
    }
  return (guess);
}
