#include "main.h"
#include <stdio.h>

int _atoi(char *s);

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{
  int i = 0;
  int sign = 1;
  int num = 0;
  int is_num = 0;

  while (s[i] == ' ')
    i++;

  if (s[i] == '-' || s[i] == '+')
    {
      if (s[i] == '-')
	sign = -1;
      i++;
    }

  while (s[i] >= '0' && s[i] <= '9')
    {
      is_num = 1;
      num = num * 10 + (s[i] - '0');
      i++;
    }

  if (is_num)
    return num * sign;
  else
    return 0;
}
