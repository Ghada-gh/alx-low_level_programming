#include <stdio.h>
#include <unistd.h>
#include "main.h"

int print_sign(int n);

/**
 * print_sign - checks for sign of numbers
 * @n: the number to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, and -1 if n is less than 0
 */
int print_sign(int n)
{
  if (n > 0){
    printf("+\n");
    printf ("\n");
    return (1);
  }
  else if (n < 0 ){
    printf("-\n");
    printf ("\n");
    return (-1);
  }
  else if (n == 0){
    printf("0\n");
    printf ("\n");
    return (0);
  }
  putchar('\n');
  return(0);
}
