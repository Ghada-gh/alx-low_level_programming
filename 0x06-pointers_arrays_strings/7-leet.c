#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leet(char *s);

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
  int i, j;
  char leet[] = {'4', '3', '0', '7', '1'};

  for (i = 0; s[i] != '\0'; i++)
    {
      for (j = 0; j < 5; j++)
        {
	  if (s[i] == 'a' || s[i] == 'A')
            {
	      s[i] = leet[0];
	      break;
            }
	  else if (s[i] == 'e' || s[i] == 'E')
            {
	      s[i] = leet[1];
	      break;
            }
	  else if (s[i] == 'o' || s[i] == 'O')
            {
	      s[i] = leet[2];
	      break;
            }
	  else if (s[i] == 't' || s[i] == 'T')
            {
	      s[i] = leet[3];
	      break;
            }
	  else if (s[i] == 'l' || s[i] == 'L')
            {
	      s[i] = leet[4];
	      break;
            }
        }
    }
  return (s);
}
