#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: ointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = 1;

	if (size < 1 || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{	return (i);
			found = 1;
			break; }
	}
	if (found == 0)
	{
		return (-1);
	}
	return (-1);
}
