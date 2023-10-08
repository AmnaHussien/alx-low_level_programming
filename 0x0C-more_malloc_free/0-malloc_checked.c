#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc and exit
 * Description: c programm
 * @b: integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
int *n = malloc(b)
if (n == 0)
{
exit(98);
}
return (n);
}
