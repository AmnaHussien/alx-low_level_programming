#include "main.h"
/**
 * set_bit - function sets bit at the index
 * Description: c programm
 * @n: number to index
 * @index: the bit to set
 * Return: 1 if success ,-1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{ return (-1); }
return (!!(*n |= 1L << index));
}
