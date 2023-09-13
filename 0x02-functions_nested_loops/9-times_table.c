#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Description: programm that prints the 9 times table, starting with 0.
 * Return: Always 0 (success)
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
_putchar('0');
for (b = 0; b <= 9; b++)
{
_putchar(',');
_putchar(' ');
c = a * b;
if (c <= 9)
_putchar(' ');
else
_putchar((c / 10) + 48);
_putchar((c % 10) + 48);
}
_putchar('\n');
}



}
