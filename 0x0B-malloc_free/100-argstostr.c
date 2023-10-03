#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av);

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of arguments.
 * @av: the array of arguments.
 *
 * Return: a pointer to a new string, or NULL if it fails.
 * Each argument should be followed by a \n in the new string.
 */

char *argstostr(int ac, char *av[])
{
  char *s;
  int i, len;

  if (ac == 0 || av == NULL)
    return (NULL);
  len = 0;
  for (i = 0; i < ac; i++)
    len += strlen(av[i]) + 2;
  s = malloc(len * sizeof(char));
  if (s == NULL)
    return (NULL);
  s[0] = '\0';
  for (i = 0; i < ac; i++)
    {
      strcat(s, av[i]);
      strcat(s, "\n");
    }
  return (s);
}
