#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * Description: cprogramm
 * @filename: name of byte to read
 * @letters: num of byte to read
 * Return: num byte to read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fdd;
ssize_t byt;
char arr[READ_ARR_SIZE * 8];
if (!filename || !letters)
{ return (0); }
fdd = open(filename, O_RDONLY);
if (fdd == -1)
{ return (0); }
byt = read(fdd, &arr[0], letters);
byt= write(STDOUT_FILENO, &arr[0], byt);
close(fdd);
return (byt);
}
