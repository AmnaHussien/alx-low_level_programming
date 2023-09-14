#include "main.h"
/**
 * more_numbers -  a function that prints the numbers, from 0 to 9
 * Description: C programm
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{int rows, counter, number;
for (rows = 1; rows <= 10; rows++)
{
for (counter = 0; counter <= 14; counter++)
{
number = counter;
if (counter > 9)
{
_putchar(1 + 48);
number = counter % 10;
}
_putchar(i + 48);
}
}
}
