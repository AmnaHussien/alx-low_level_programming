#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * Descriotion: c programm
 * @b: pointing to string of 0 and 1
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int p = 0;
int j = 0;
if (b == NULL)
{ return (0); }
 while (b[j] == '0' || b[j] == '1')
{
p = p << 1;
p = p + b[j]-'0';
j++;
}
return (p);
}
