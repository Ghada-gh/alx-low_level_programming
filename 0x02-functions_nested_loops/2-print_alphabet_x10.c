#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_alphabet_x10(void);
/*int _putchar(char c);
 */

/** 
 * print_alphabet - prints the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
  char c;
  int i;

  for (i = 0; i < 10; i++)
    {
      for (c = 'a'; c <= 'z'; c++)
        {
          _putchar(c);
        }
      _putchar('\n');
    }
}
