#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
  int fd;
  mode_t mode;
  ssize_t written;

  if (filename == NULL)
    return (-1);

  mode = S_IRUSR | S_IWUSR;
  fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
  if (fd == -1)
    return (-1);

  if (text_content == NULL)
    written = 0;
  else
    written = write(fd, text_content, strlen(text_content));

  if (written == -1)
    {
      close(fd);
      return (-1);
    }

  close(fd);
  return (1);
}
