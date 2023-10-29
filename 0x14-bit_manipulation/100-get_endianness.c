#include "main.h"
/**
 * get_endianness - function that return the endianness of system
 * Description: c programm
 * Return: 0 if it is big endian, 1 if small
 */
int get_endianness(void)
{
unsigned long int m = 1;
return (*(char *)&m);
}
