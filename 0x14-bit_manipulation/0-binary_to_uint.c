#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int num = 0, temp = 0;
  const char *ptr = b;
  unsigned int i;

  if (!b)
    return (0);

  while (*ptr)
    {
      if (*ptr != '0' && *ptr != '1')
	return (0);
      ptr++;
    }

  while (*b)
    {
      if (*b == '1')
        {
	  temp = 1;
	  for (    i = 0; i < num; i++)
	    temp *= 2;
	  num += temp;
        }
      b++;
      num *= 2;
    }

  return (num);
}