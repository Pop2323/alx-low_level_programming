#include "main.h"
#include <elf.h>

/**
 * print_error - func that check the error.
 *
 * @message: message char type
 *
 * Return: return void.
*/
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_h - display the elf header to the screen.
 *
 * @header: this the elf header.
 *
 * Return: return void.
*/
void display_elf_h(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:                       %d\n", header->e_ident[EI_CLASS]);
	printf("Data:                        %d\n", header->e_ident[EI_DATA]);
	printf("Version:                     %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                      %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                 %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                        %d\n", header->e_type);
	printf("Entry point address:         0x%lx\n", header->e_entry);
}

/**
 * main - program that displays the info contained in the ELF.
 *
 * @argc:  indicates how many arguments (arg count).
 * @argv: an arr of pointers to arrs of char objects.
 *
 * Return: return 1 if success or 0 on failure.
*/
int main(int argc, char *argv[])
{
	char *filenam;
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;


		if (argc != 2)
		{
			print_error("Usage: elf_header elf_filename");
		}
		filename = argv[1];
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			print_error("Failed to open the file");
		}
		bytes_read = read(fd, &header, sizeof(header));
		if (bytes_r != sizeof(header))
		{
			print_error("Failed to read ELF header");
		}
		if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		    header.e_ident[EI_MAG1] != ELFMAG1 ||
		    header.e_ident[EI_MAG2] != ELFMAG2 ||
		    header.e_ident[EI_MAG3] != ELFMAG3)
		{
			print_error("Not an ELF file");
		}
		display_elf_header(&header);
		close(fd);
		return (0);
}
