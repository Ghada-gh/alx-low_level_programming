#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
  int fd_from, fd_to, n;
  char buffer[1024];

  if (argc != 3)
    {
      dprintf(2, "Usage: cp file_from file_to\n");
      exit(97);
    }

  fd_from = open(argv[1], O_RDONLY);
  if (fd_from == -1)
    {
      dprintf(2, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }

  fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
  if (fd_to == -1)
    {
      dprintf(2, "Error: Can't write to %s\n", argv[2]);
      exit(99);
    }

  while ((n = read(fd_from, buffer, 1024)) > 0)
    {
      if (write(fd_to, buffer, n) == -1)
        {
	  dprintf(2, "Error: Can't write to %s\n", argv[2]);
	  exit(99);
        }
    }

  if (n == -1)
    {
      dprintf(2, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }

  if (close(fd_from) == -1)
    {
      dprintf(2, "Error: Can't close fd %d\n", fd_from);
      exit(100);
    }

  if (close(fd_to) == -1)
    {
      dprintf(2, "Error: Can't close fd %d\n", fd_to);
      exit(100);
    }

  return 0;
}
