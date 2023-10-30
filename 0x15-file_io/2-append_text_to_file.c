#include "main.h"
/**
 * append_text_to_file - Write a function that appends text at the end of a file.
 * Description: cprogramm
 * @filename: name of file 
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdd;
ssize_t byt = 0, length = _stlen(text_content);
if (!filename)
{ return (-1); }
fdd = open(filename, O_WRONLY | O_APPEND);
if (fdd == -1)
{ return (-1); }
if (length)
{ byt = write(fdd, text_content, length); }
close(fdd);
return (byt == length ? 1 : -1);
}
