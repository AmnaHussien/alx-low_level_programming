#include "main.h"
#include <stdio.h>
/**
 * factorial - find the factorial
 * @n: int
 * Return: int numer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
