#include "main.h"
/**
 * print_numbers -  a function that prints the numbers, from 0 to 9
 * Description: C programm
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
int i;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
return (0);
}
