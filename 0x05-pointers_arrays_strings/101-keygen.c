#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * @brief Generates a random valid password for the program 101-crackme.
 *
 * @return A randomly generated valid password.
 */
char *generate_password(void)
{
  char *password;
  int i;
  password = malloc(sizeof(char) * 8);
  if (password == NULL)
    return (NULL);
  for (i = 0; i < 8; i++)
    {
      password[i] = (rand() % 26) + 'a';
    }
  return (password);
}
int main(void)
{
  char *password;
  srand(time(NULL));
  password = generate_password();
  printf("./101-crackme \"%s\"\nTada! Congrats\n", password);
  free(password);
  return (0);
}
