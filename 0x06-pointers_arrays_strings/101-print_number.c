#include "main.h"
/**
 * print_number - function that prints an integer.
 * Description: C program
 * @n: integer input
 * Return: 0
 */
void print_number(int n)
{
unsigned int i;
i = n;
if (n < 0)
{
_putchar('-');
i = -n;
}
if ((n / 10) != 0)
{
print_number(n / 10);
}
_putchar((n % 10) + 48);
}
