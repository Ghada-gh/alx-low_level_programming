#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - Entry point of the program
 *
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
  int num1, num2, result;
  int (*func)(int, int);

  if (argc != 4)
    {
      fprintf(stderr, "Error\n");
      return (98);
    }
  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);
  func = get_op_func(argv[2]);
  if (func == NULL)
    {
      return (99);
    }
  result = func(num1, num2);
  printf("%d\n", result);
  return (0);
}
