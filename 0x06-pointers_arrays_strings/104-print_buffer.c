#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size);

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
  int i, j;

  if (size <= 0)
    {
      printf("\n");
      return;
    }
  for (i = 0; i < size; i += 10)
    {
      printf("%08x: ", i);
      for (j = 0; j < 10 && i + j < size; j++)
        {
	  printf("%02x ", b[i + j]);
        }
      for (; j < 10; j++)
        {
	  printf("   ");
        }
      printf(" ");
      for (j = 0; j < 10 && i + j < size; j++)
        {
	  if (b[i + j] >= 32 && b[i + j] <= 126)
            {
	      printf("%c", b[i + j]);
            }
	  else
            {
	      printf(".");
            }
        }
      printf("\n");
    }
}
