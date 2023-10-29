#include "main.h"
/**
 * flip_bits - function return numb of bit that would need to be flipped 
 * Description: c programm
 * @n: first number
 * @m: second number
 * Return: numb of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int p = n ^ m;
unsigned long int counter = 0;
while (p)
{
if (p & 1uL)
{ counter ++;}
p = p >> 1;
}
return (counter);
}
