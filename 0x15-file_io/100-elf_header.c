#include <elf.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void check_elf(unsigned char *el_ident);
void prin_magic(unsigned char *el_ident);
void prin_class(unsigned char *el_ident);
void prin_data(unsigned char *el_ident);
void prin_version(unsigned char *el_ident);
void prin_abi(unsigned char *el_ident);
void prin_osabi(unsigned char *el_ident);
void prin_type(unsigned int el_type, unsigned char *el_ident);
void prin_entry(unsigned long int el_entry, unsigned char *el_ident);
void close_elf(int elf);



/**
 * check_elf - function that Checks if a file is ELF file.
 * @el_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 * eturn: nothing
 */
void check_elf(unsigned char *el_ident)
{int indx;
for (indx = 0; indx < 4; indx++)
{
if (el_ident[indx] != 127 &&
el_ident[indx] != 'E' &&
el_ident[indx] != 'L' &&
el_ident[indx] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98); }}}
/**
 * prin_magic - function that Prints the magic numbers of an ELF header.
 * @el_ident: A pointer to an array containing the ELF magic numbers
 * Description: Magic numbers are separated by spaces.
 * Return: nothing
 */
void prin_magic(unsigned char *el_ident)
{ int indx;
printf("  Magic:   ");
for (indx = 0; indx < EI_NIDENT; indx++)
{
printf("%02x", el_ident[indx]);
if (indx == EI_NIDENT - 1)
{ printf("\n"); }
else
printf(" "); }}

/**
 * prin_class - Prints the class of an ELF header.
 * @el_ident: A pointer to an array containing the ELF class
 * Description: c programm
 * Return: nothing
 */
void prin_class(unsigned char *el_ident)
{
printf("  Class:                             ");
switch (el_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", el_ident[EI_CLASS]); }}
/**
 * prin_data - Prints the data of an ELF header.
 * @el_ident: A pointer to an array containing the ELF class.
 * Description: c programm
 * Return: nothing
 */
void prin_data(unsigned char *el_ident)
{
printf("  Data:                              ");
switch (el_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", el_ident[EI_CLASS]); }}

/**
 * prin_version - Prints the version of an ELF header.
 * @el_ident: A pointer to an array containing the ELF version
 * Description: c programm
 * Return: nothing
 */
void prin_version(unsigned char *el_ident)
{
printf("  Version:                           %d",
el_ident[EI_VERSION]);
switch (el_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break; }}

/**
 * prin_osabi - Prints the OS/ABI of an ELF header.
 * @el_ident: A pointer to an array containing the ELF version.
 * Description: c programm
 * Return: nothing
 */
void prin_osabi(unsigned char *el_ident)
{
printf("  OS/ABI:                            ");
switch (el_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", el_ident[EI_OSABI]); }}

/**
 * prin_abi - Prints the ABI version of an ELF header.
 * @el_ident: A pointer to an array containing the ELF ABI version.
 * Description: c programm
 * Return: nothing
 */
void prin_abi(unsigned char *el_ident)
{
printf("  ABI Version:                       %d\n",
el_ident[EI_ABIVERSION]); }

/**
 * prin_type - function that Prints the type of an ELF header.
 * @el_type: The ELF type.
 * @el_ident: A pointer to an array containing the ELF class.
 */
void prin_type(unsigned int el_type, unsigned char *el_ident)
{
if (el_ident[EI_DATA] == ELFDATA2MSB)
{ el_type >>= 8; }
printf("  Type:                              ");
switch (el_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", el_type); }}

/**
 * prin_entry - function that Prints the entry point of an ELF header
 * @el_entry: The address of the ELF entry point
 * @el_ident: A pointer to an array containing the ELF clas
 */
void prin_entry(unsigned long int el_entry, unsigned char *el_ident)
{
printf("  Entry point address:               ");
if (el_ident[EI_DATA] == ELFDATA2MSB)
{el_entry = ((el_entry << 8) & 0xFF00FF00) |
((el_entry >> 8) & 0xFF00FF);
el_entry = (el_entry << 16) | (el_entry >> 16); }
if (el_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)el_entry);
else
printf("%#lx\n", el_entry); }

/**
 * close_elf - function that Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98
 * Return: nothing
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
exit(98);
}}
/**
 * main - Entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{ Elf64_Ehdr  *head;
int p, m;
p = open(argv[1], O_RDONLY);
if (p == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98); }
head = malloc(sizeof(Elf64_Ehdr));
if (head == NULL)
{
close_elf(p);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98); }
m = read(p, head, sizeof(Elf64_Ehdr));
if (m == -1)
{
free(head);
close_elf(p);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98); }
check_elf(head->e_ident);
printf("ELF Header:\n");
prin_magic(head->e_ident);
prin_class(head->e_ident);
prin_data(head->e_ident);
prin_version(head->e_ident);
prin_osabi(head->e_ident);
prin_abi(head->e_ident);
prin_type(head->e_type, head->e_ident);
prin_entry(head->e_entry, head->e_ident);
free(head);
close_elf(p);
return (0); }
