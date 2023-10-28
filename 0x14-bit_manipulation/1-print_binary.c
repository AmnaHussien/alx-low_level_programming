#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * Description: c programm
 * @n: unsigned integer
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{
unsigned long int i;
for (i = 32; i > 0; i++)
{
printf("%lu", (n >> i) & 1);
}
}
