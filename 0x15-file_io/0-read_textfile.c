#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  FILE *file;
  ssize_t nread;
  char *buffer;

  if (filename == NULL)
    return (0);

  file = fopen(filename, "r");
  if (file == NULL)
    return (0);

  buffer = malloc(letters + 1);
  if (buffer == NULL)
    {
      fclose(file);
      return (0);
    }

  nread = fread(buffer, 1, letters, file);
  if (nread == 0)
    {
      fclose(file);
      free(buffer);
      return (0);
    }

  buffer[nread] = '\0';
  fwrite(buffer, 1, nread, stdout);

  fclose(file);
  free(buffer);
  return (nread);
}
