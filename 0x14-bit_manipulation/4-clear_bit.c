#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * Description: c programm
 * @n: number to index
 * @index: the bits to clear
 * Return: 1 if success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{ return (-1); }
if (*n & 1L << index)
{ *n ^= 1L << index; }
return (1);
}
