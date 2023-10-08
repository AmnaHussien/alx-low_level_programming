#include "main.h"
/**
 * array_range - create array of integer
 * Description: c programm
 * @min: minimum int
 * @max: maximum int
 * Return: array of int 
 */
int *array_range(int min, int max)
{
int *m, l, i;
if ( min > max)
{
return (NULL);
}
l = max - min + 1;
m = malloc(sizeof(int) * l)
if (m == 0)
{
return (NULL);
}
for(i = 0; i < l; i++)
{
m[i] = min++;
}
return (m);
}
