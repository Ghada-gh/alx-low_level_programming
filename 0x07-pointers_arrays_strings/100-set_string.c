#include "main.h"
#include <stdio.h>

void set_string(char **s, char *to);

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to the char.
 * @to: The value to set the pointer to.
 * Return: char
 */
void set_string(char **s, char *to)
{
  *s = to;
}
