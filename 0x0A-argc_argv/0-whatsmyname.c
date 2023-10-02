#include <stdio.h>

/**
 * file-name - This program prints its name, followed by a new line.
 *
 * Return: 0 on successful execution
 */

int file_name(char *argv[])
{
  printf("%s\n", argv[0]);
  return (0);
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
  return (file_name(argv));
}
