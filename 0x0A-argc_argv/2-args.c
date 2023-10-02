#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments passed to the program.
 * @argc: The number of arguments passed to the program.
 * @argv: The arguments passed to the program.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
    printf("%s\n", argv[i]);
  return (0);
}
