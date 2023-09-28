#include "main.h"
#include <stdio.h>
/** 
 * _strlen_recursion - function that return the length of string
 * @s: pointer
 * Return: int numer
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s > '\0')
{
n += _strlen_recursion(s + 1) + 1;
}
return (n);
}
