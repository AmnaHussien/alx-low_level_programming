#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * Description: c programm
 * @n: unsigned integer
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{ int i =  sizeof(n) * 8, p = 0;
while (i)
{
if (n & 1L << --i)
{
_putchar('1');
p++;
}
else if (p)
{ _putchar('0'); }
}
if (!p)
{ _putchar('0'); }
}
