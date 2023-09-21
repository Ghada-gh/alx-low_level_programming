#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 *infinite_add - a function that adds two numbers.
 *
 *Return: integer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i, j, k, carry, len1, len2;

  len1 = strlen(n1);
  len2 = strlen(n2);
  if (len1 > size_r || len2 > size_r)
    return 0;
  i = len1 - 1;
  j = len2 - 1;
  k = size_r - 1;
  carry = 0;
  while (i >= 0 || j >= 0 || carry)
    {
      int sum = carry;
      if (i >= 0)
	sum += n1[i] - '0';
      if (j >= 0)
	sum += n2[j] - '0';
      carry = sum / 10;
      r[k] = sum % 10 + '0';
      i--;
      j--;
      k--;
    }
  if (carry)
    return 0;
  r[k] = '\0';
  return r;
}
