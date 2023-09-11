#include <stdio.h>

/**
*main - Prints the alphabet in lowercase
*Return: 0 if successful
*/
int main(void)
{
  char c;
  c = 'a';  
  while (c <= 'z') {
    putchar(c);
    c++;  
  }
  putchar('\n');
  return (0);
}
