#include <stdio.h>
#include <stdlib.h>

void new_print(void) __attribute__ ((constructor));

/**
 * new_print - Function to be executed before main
 *
 * This function prints the desired message before the main function is executed.
 */
void new_print(void)
{
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
