#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * Description: c programm
 * @n: unsigned integer
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{ int i =  sizeof(n), p = 0;
while (i)
{
if (n & 1 << --i)
{
printf("1");
p++;
}
else if (p)
{ printf("0"); }
}
if (!p)
{ printf("0"); }
}
