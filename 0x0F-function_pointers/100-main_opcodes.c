#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_opcodes(int number_of_bytes);

/**
 * print_opcodes - prints the opcodes of its own main function.
 * @number_of_bytes: integer.
 * Return: opcodes.
 */

void print_opcodes(int number_of_bytes)
{
  if (number_of_bytes < 0)
    {
      printf("Error\n");
      exit(2);
    }

  FILE *file = fopen("main", "r");
  if (file == NULL)
    {
      printf("Error\n");
      exit(1);
    }

  fseek(file, 0, SEEK_END);
  long file_size = ftell(file);
  fseek(file, 0, SEEK_SET);

  char *buffer = (char *)malloc(file_size * sizeof(char));
  fread(buffer, sizeof(char), file_size, file);
  fclose(file);

  int i;
  i = 0;
  for (i < number_of_bytes; i++;)
    {
      printf("%02x", (unsigned char)buffer[i]);
    }

  printf("\n");
  free(buffer);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      printf("Error\n");
      exit(1);
    }

  int number_of_bytes = atoi(argv[1]);
  print_opcodes(number_of_bytes);

  return (0);
}
