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
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
putchar('\');
}
putchar('\n');
}
}
