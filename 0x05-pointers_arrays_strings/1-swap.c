#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * Description: C program
 * @a: integer input pointer
 * @b: integer input pointer
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
