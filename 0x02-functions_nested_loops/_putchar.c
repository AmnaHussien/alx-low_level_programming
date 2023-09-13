#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character to print
 * Description: program prints _putchar, followed by a new line.
 * @c: the character to print
 * Return: On success 1, On error -1 is returned
 * and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
