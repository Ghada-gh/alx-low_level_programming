#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * cp -  Copy the content of a file to another file.
 * Return: 0 if the operation was successful, and a non-zero value otherwise.
 */
int cp(const char *file_from, const char *file_to)
{
  char buffer[1024];
  ssize_t bytes_read;
  int fd_from, fd_to;

  if (file_from == NULL || file_to == NULL)
    {
      fprintf(stderr, "Usage: cp file_from file_to\n");
      return (97);
    }

  fd_from = open(file_from, O_RDONLY);
  if (fd_from == -1)
    {
      perror("Error: Can't read from file");
      return (98);
    }

  fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if (fd_to == -1)
    {
      perror("Error: Can't write to file");
      close(fd_from);
      return (99);
    }

  while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
      if (write(fd_to, buffer, bytes_read) != bytes_read)
	{
	  perror("Error: Can't write to file");
	  close(fd_from);
	  close(fd_to);
	  return (100);
        }
    }

  if (bytes_read == -1)
    {
      perror("Error: Can't read from file");
      close(fd_from);
      close(fd_to);
      return (101);
    }

  if (close(fd_from) == -1)
    {
      perror("Error: Can't close fd");
      close(fd_to);
      return (102);
    }
  if (close(fd_to) == -1)
    {
      perror("Error: Can't close fd");
      return (103);
    }

  return 0;
}
