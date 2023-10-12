#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
  va_list args;
  int i = 0;

  va_start(args, format);

  while (format[i])
    {
      if (format[i] == 'c')
        {
	  char c = (char)va_arg(args, int);
	  printf("%c", c);
        }
      else if (format[i] == 'i')
        {
	  int n = va_arg(args, int);
	  printf("%d", n);
        }
      else if (format[i] == 'f')
        {
	  float f = (float)va_arg(args, double);
	  printf("%f", f);
        }
      else if (format[i] == 's')
        {
	  char *s = va_arg(args, char *);
	  if (s == NULL)
	    printf("(nil)");
	  else
	    printf("%s", s);
        }

      if (format[i + 1])
	printf(", ");

      i++;
    }
  printf("\n");
  va_end(args);
}
