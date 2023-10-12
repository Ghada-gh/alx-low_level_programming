#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i;

  va_start(ap, n);
  for (i = 0; i < n; i++)
    {
      const char *str = va_arg(ap, const char *);
      if (str == NULL)
	printf("(nil)");
      else
	printf("%s", str);
      if (separator != NULL && i < n - 1)
	printf("%s", separator);
    }
  va_end(ap);
  printf("\n");
}
