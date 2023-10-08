#include "main.h"
/*
 * *-memset - files memory with constant byte
 * Description: c programm
 * @ss: pointer
 * @bb: costant
 * @nn: max bytes to use
 * Return: pointer
 */
char *_memset(char *ss, char bb, unsigned int nn)
{
char *ptr = ss;
while (n--)
{
*ss++ = b;
return (ptr);
}
}
/**
 * *_calloc - allocates memory for array
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
m = malloc(sizeof(int) * nmemb);
if (m == 0)
{
return (NULL);
}
_memset(m, 0, sizeof(int) * nmemb);
return (m);
}
