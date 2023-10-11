#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as parameter
 * Description: c programm
 * @array: array of element
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
action(array[size]);
}
