#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_elf_header - Display information from the ELF header.
 * @ehdr: The ELF header structure.
 * Return: void.
 */

void display_elf_header(Elf64_Ehdr *ehdr)
{
  printf("ELF Header:\n");
  printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
	 ehdr->e_ident[0], ehdr->e_ident[1], ehdr->e_ident[2], ehdr->e_ident[3],
	 ehdr->e_ident[4], ehdr->e_ident[5], ehdr->e_ident[6], ehdr->e_ident[7],
	 ehdr->e_ident[8], ehdr->e_ident[9], ehdr->e_ident[10], ehdr->e_ident[11],
	 ehdr->e_ident[12], ehdr->e_ident[13], ehdr->e_ident[14], ehdr->e_ident[15]);
  printf("  Class:                             ");
  switch (ehdr->e_ident[EI_CLASS])
    {
    case ELFCLASS32:
      printf("ELF32\n");
      break;
    case ELFCLASS64:
      printf("ELF64\n");
      break;
    default:
      printf("<unknown>\n");
    }
  printf("  Data:                              ");
  switch (ehdr->e_ident[EI_DATA])
    {
    case ELFDATA2LSB:
      printf("2's complement, little endian\n");
      break;
    case ELFDATA2MSB:
      printf("2's complement, big endian\n");
      break;
    default:
      printf("<unknown>\n");
    }
  printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
  printf("  OS/ABI:                            ");
  switch (ehdr->e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
      printf("UNIX - System V\n");
      break;
    case ELFOSABI_NETBSD:
      printf("UNIX - NetBSD\n");
      break;
    case ELFOSABI_SOLARIS:
      printf("UNIX - Solaris\n");
      break;
    default:
      printf("<unknown: %d>\n", ehdr->e_ident[EI_OSABI]);
    }
  printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
  printf("  Type:                              ");
  switch (ehdr->e_type)
    {
    case ET_NONE:
      printf("NONE (Unknown type)\n");
      break;
    case ET_EXEC:
      printf("EXEC (Executable file)\n");
      break;
    case ET_DYN:
      printf("DYN (Shared object file)\n");
      break;
    case ET_REL:
      printf("REL (Relocatable file)\n");
      break;
    default:
      printf("<unknown>\n");
    }
  printf("  Entry point address:               0x%lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[])
{
  int fd;
  Elf64_Ehdr ehdr;

  if (argc != 2)
    {
      dprintf(2, "Usage: %s elf_filename\n", argv[0]);
      exit(98);
    }

  fd = open(argv[1], O_RDONLY);
  if (fd == -1)
    {
      dprintf(2, "Error: Can't open file %s\n", argv[1]);
      exit(98);
    }

  if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
      dprintf(2, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }

  if (lseek(fd, 0, SEEK_SET) == -1)
    {
      dprintf(2, "Error: Can't seek in file %s\n", argv[1]);
      exit(98);
    }

  display_elf_header(&ehdr);

  close(fd);
  return 0;
}
