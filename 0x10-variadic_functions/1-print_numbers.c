#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print num
 * Description: c programm
 * @separator: pointer
 * @n: the number of numbers
 * Return: summation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int j;
va_start(ar, n);
for (j = 0; j < n; j++)
{
printf("%d", va_arg(ar, int));
if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ar);
}
