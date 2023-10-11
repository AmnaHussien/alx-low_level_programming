#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * Description: c programm
 * @array: array
 * @size: array size
 * @cmp: compare values
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == 0 || cmp == 0 || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]))
{
return (i);
}
}
return (-1);
}
