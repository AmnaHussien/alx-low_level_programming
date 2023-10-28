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
for (i = 0; i <= n; i++)
{
if (n & (1 << i))
{ printf("1"); }
else
{ printf("0"); }

}
}
