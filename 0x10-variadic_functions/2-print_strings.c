#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * Description: c programm
 * @separator: pointer
 * @n: the number of numbers
 * Return: summation
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ar;
char *s;
unsigned int j;
va_start(ar, n);
for (j = 0; j < n; j++)
{
s = va_arg(ar, char *);
if (s == 0)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ar);
}
