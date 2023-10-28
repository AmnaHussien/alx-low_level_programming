#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * Description: c programm
 * @n: unsigned integer
 * Return: the binary representation of a number
 */
void print_binary(unsigned long int n)
{ int i;
for (i = sizeof(n) * 8; i > 0; --i)
{
(n & i) ? printf("1") : printf("0");

}
}
