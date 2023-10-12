#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that print anything
 * Description: c programm
 * @format: list of types of arguments passed to the function
 * Return: summation
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sepr = "";
va_list ar;
va_start(ar, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sepr, va_arg(ar, int));
break;
case 'i':
printf("%s%d", sepr, va_arg(ar, int));
break;
case 'f':
printf("%s%f", sepr, va_arg(ar, double));
break;
case 's':
str = va_arg(ar, char *);
if (!str)
str = "(nil)";
printf("%s%s", sepr, str);
break;
default:
i++;
continue;
}
sepr = ", ";
i++;
}
}
printf("\n");
va_end(ar);
}
