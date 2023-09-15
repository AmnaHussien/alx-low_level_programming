#include "main.h"
/**
 * print_number - function that prints an integer
 * Description: C programm
 * @n:the integer to be printed
 * Return: Always 0 (success)
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
putchar('-');
num = -num
}
if ((num / 10) > 0)
{
print_number(num / 10);
}
putchar((num % 10) + 48);
}
