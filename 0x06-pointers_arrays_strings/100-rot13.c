#include "main.h"
#include <stdio.h>

char *rot13(char *s);

/**
 * _rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
  int i;
  i = 0;

  while (s[i] != '\0')
    {
      if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
	{
	  s[i] += 13;
	}
      else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
	{
	  s[i] -= 13;
	}
      i++;
    }
  return (s);
}
