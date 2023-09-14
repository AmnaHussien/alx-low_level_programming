#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * Description: C programm
 * @n: takes integer type input to the function
 * Return: Always 0 (success)
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
putchar('_');
putchar('\n');
}
}
}
