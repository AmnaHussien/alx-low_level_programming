#include "main.h"
/**
 * @n: takes integer type input for function
 * print_sign - function that prints the sign of a number
 * Description: function that print + if n is greater than zero
 * or 0 if n is zero or - if n is less than zero
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
