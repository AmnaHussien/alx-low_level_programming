#include "main.h"
/**
 * *_memset - files memory with constant byte
 * description: c programm
 * @ss: pointer
 * @bb: costant
 * @nn: max bytes to use
 * Return: pointer
 */
char *_memset(char *ss, char bb, unsigned int nn)
{
char *ptr = ss;
while (nn--)
{
*ss++ = bb;
}
return (ptr);
}

/**
 * *_calloc - allocates memory for array
 * Description: c programm
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *n;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
n = malloc(sizeof(int) * nmemb);
if (n == 0)
{
return (NULL);
}
_memset(n, 0, sizeof(int) * nmemb);
return (n);
}
