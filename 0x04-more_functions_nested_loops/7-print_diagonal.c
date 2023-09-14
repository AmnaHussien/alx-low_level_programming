#include "main.h"
/**
 * print_diagonal - function that draws
 * diagonal line on the terminal.
 * Description: C programm
 * @n: takes integer type to the function
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i, space;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
for (space = 1; space <= i ; space++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
}
