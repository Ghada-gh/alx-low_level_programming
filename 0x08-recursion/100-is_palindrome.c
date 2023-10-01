#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int is_palindrome(char *s);

/**
 * is_palindrome - This function checks if a given string is a palindrome.
 * @s: The string to check.
 * Return: 1 If the string is a palindrome and 0 If the string is not a palindrome.
 */

int is_palindrome(char *s)
{
  size_t len = strlen(s);

  if (len <= 1)
    {
      return (1);
    }
  if (s[0] != s[len - 1])
    {
      return (0);
    }
  return is_palindrome(s + 1) && s[0] == s[len - 1];
}
