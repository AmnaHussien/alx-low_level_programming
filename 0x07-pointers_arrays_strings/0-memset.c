#include "main.h"
/**
 * *_memset -  function that fills memory with a constant byte
 * Description: C programm
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int g;
for (g = 0; n > 0; g++, n--)
{
s[g] = b;
}
return (s);
}
