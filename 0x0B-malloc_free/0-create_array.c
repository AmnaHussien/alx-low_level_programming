#include "main.h"
/**
 * *create_array -  function that creates an array of chars
 * @size: size of array
 * @c: char
 * Return:npointer to the array initialized or null
 */
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
{
return (0);
}
while (size--)
{
m[size] = c;
}
return (m);
}
