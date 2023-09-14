#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * Description: C programm
 * @n: takes integer type input to the function
 * Return: Always 0 (success)
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (int i = 1; i <= n; i++)
{
_putchar('_');
_putchar('\n');
}
}
}
