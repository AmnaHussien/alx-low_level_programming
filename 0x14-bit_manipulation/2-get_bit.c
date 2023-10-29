#include "main.h"
/**
 * get_bit - function get bit at the index
 * Description: c programm
 * @n: number to index
 * @index: the bit to get
 * Return: the bit or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{ return (-1); }
return (n >> index & 1);
}
