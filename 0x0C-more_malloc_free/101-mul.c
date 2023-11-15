#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Function to check if a string is a positive number
 * @i:integer
 * Return: zero
 */

int is_positive_number(char *str)
{
  for (int i = 0; i < strlen(str); i++)
    {
      if (!isdigit(str[i]))
	{
	  return (0);
        }
    }
  return (1);
}

/**
 *long multiply - Function to multiply two numbers
 * @num1: long long
 * @num2: long long
 * Return: result of multiplication.
 */

long long multiply(long long num1, long long num2)
{
  return num1 * num2;
}

/**
 * string_to_long_long -  Function to convert a string to a long long number
 * @num1: long long 
 * @num2: long long
 * Return: long long number
 */

long long string_to_long_long(char *str)
{
  long long num = 0;

  for (int i = 0; i < strlen(str); i++)
    {
      num = num * 10 + (str[i] - '0');
    }
  return num;
}

/**
 * long_long_to_string - Function to convert a long long number to a string
 * @num: long long
 * @str: char
 * Return: string
 */

void long_long_to_string(long long num, char *str)
{
  int i = 0;

  while (num != 0)
    {
      str[i++] = (num % 10) + '0';
      num /= 10;
    }
  str[i] = '\0';
  reverse(str);
}

/**
 * reverse - Function to reverse a string
 * @str: string
 * Return: reveresed string
 */

void reverse(char *str)
{
  int length = strlen(str);

  for (int i = 0; i < length / 2; i++)
    {
      char temp = str[i];
      str[i] = str[length - i - 1];
      str[length - i - 1] = temp;
    }
}

/**
 * main - check the code for 
 * @argc: integer
 * Return:number of arguments
 */

int main(int argc, char *argv[])
{
  if (argc != 4)
    {
      printf("Error\n");
      return (98);
    }

  if (!is_positive_number(argv[2]) || !is_positive_number(argv[3]))
    {
      printf("Error\n");
      return (98);
    }

  long long num1 = string_to_long_long(argv[2]);
  long long num2 = string_to_long_long(argv[3]);

  long long result = multiply(num1, num2);

  char result_str[21];
  long_long_to_string(result, result_str);

  printf("%s\n", result_str);
  
  return (0);
}
