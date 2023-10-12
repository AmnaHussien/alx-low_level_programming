#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum the num
 * Description: c programm
 * @n: the number of numbers
 * Return: summation
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ar;
unsigned int summ = 0;
unsigned int j;
if (n == 0)
{
return (0);
}
va_start(ar, n);
for (j = 0; j < n; j++)
{
summ = summ + va_arg(ar, int);
}
va_end(ar);
return (summ);
}
