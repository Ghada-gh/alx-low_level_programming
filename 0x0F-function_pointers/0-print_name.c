#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_name(char *name, void (*f)(char *));


/**
 * print_name - prints a name using a specified function
 * @name: name of the person
 * @f: function to use for printing the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
