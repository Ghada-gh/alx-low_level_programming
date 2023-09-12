#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_alphabet(void);
int _putchar(char c);
/**
 * print_alphabet - prints the alphabet in lowercase*
 * Return: void
 */
void print_alphabet(void)
{
  char c;

  for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
  _putchar('\n');
}
