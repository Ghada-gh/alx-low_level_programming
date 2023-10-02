#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of arguments passed to the program.
 * @argv: The arguments passed to the program.
 *
 * Return: Always 0.
 */
int main (int argc, __attribute__((unused)) char *argv[])
{
  printf("%d\n", argc - 1);
  return (0);
}
