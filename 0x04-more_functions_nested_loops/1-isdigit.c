#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9
 * Description: C programm
 * @c: takes integer type to the function
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
