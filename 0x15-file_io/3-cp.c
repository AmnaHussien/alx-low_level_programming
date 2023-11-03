#include "main.h"
#include <stdio.h>

/**
 * error_file - function that check if files can be opened
 * @filfrom: file_from
 * @filto: file_to
 * @argv: arguments vector
 * Return: nothing
 */
void error_file(int filfrom, int filto, char *argv[])
{
if (filfrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (filto == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int filfrom, filto, err_close;
ssize_t n_chars, nwr;
char arr[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp filfrom filto");
exit(97);
}
filfrom = open(argv[1], O_RDONLY);
filto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(filfrom, filto, argv);
n_chars = 1024;
while (n_chars == 1024)
{
n_chars = read(filfrom, arr, 1024);
if (n_chars == -1)
{ error_file(-1, 0, argv); }
nwr = write(filto, arr, n_chars);
if (nwr == -1)
{ error_file(0, -1, argv); }
}
err_close = close(filfrom);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filfrom);
exit(100);
}
err_close = close(filto);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filfrom);
exit(100);
}
return (0);
}
