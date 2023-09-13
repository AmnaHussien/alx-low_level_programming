#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * Description: function print 1 and + if n greater than zero
 *              print 0 and 0 if n equal zero
 *              print -1 and - if n less than zero
 * @n: takes integer types input for the function
 * Return: 1 if n greater than zero, 0 if n equal zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}

}
