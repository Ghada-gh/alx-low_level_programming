#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *Return: 0 if successful
 */
int main(void)
{
  int n;
  char c;

  for (n = 0; n < 10; n++)
    {
      putchar(n + '0');
    }
  for (c = 'a'; c <= 'f'; c++)
    {
      putchar(c);
    }
  putchar('\n');
  return (0);
}
