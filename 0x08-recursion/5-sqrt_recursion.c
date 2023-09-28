#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - find d quare root
 * @n: int
 * @valu: square root
 * Return: int
 */
int square(int n, int valu);
int  _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - find the square root
 * * @n: int
 * @valu: square root
 * Return: int
 */
int square(int n, int valu)
{
if (valu * valu == n)
{
return (valu);
}
else if (valu * valu < n)
{
return (square(n, valu + 1));
}
else
{
return (-1);
}
}
