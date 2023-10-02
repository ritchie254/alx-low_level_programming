#include "main.h"

/**
  * display_elf_header - a program that displays the information contained in the ELF header
  *@header: header
  */

void display_elf_header(const Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : (header->e_type == ET_DYN) ? "DYN (Shared object file)" : (header->e_type == ET_REL) ? "REL (Relocatable file)" : "Other");
	printf("Entry point address:                0x%lx\n", header->e_entry);
}

