#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: The arguments passed to the program.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
  int a, b, c;

  if (argc != 3)
    {
      printf("Error\n");
      return (1);
    }
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = a * b;
  printf("%d\n", c);
  return (0);
}
