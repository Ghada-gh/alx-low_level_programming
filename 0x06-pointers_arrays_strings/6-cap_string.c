#include "main.h"
#include <stdio.h>

char *cap_string(char *);

/**
 * cap_string - capitalizes all words of a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */

char *cap_string(char *str)
{
  int i, j;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  for (j = i; str[j] >= 'a' && str[j] <= 'z'; j++)
	    str[j] -= 32;
	  i = j;
	}
    }
  return (str);
}
