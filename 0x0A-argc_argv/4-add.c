#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(char *str);

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: The arguments passed to the program.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
  int i, sum;

  sum = 0;
  for (i = 1; i < argc; i++) {
    if (!is_number(argv[i])) {
      printf("Error\n");
      return (1);
    }
    sum += atoi(argv[i]);
  }
  printf("%d\n", sum);
  return (0);
}

/**
 * is_number - Checks if a string is a number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */

int is_number(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (!isdigit(str[i]))
	{
	  return (0);
	}
    }
  return (1);
}
