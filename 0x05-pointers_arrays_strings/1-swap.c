#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * Description: C programm
 * @a: integer input pointer 
 * @b: integer input pointer
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
int *p = a;
int *q = b;
printf("a=%d, b=%d\n", a, b);
*p = b;
*q = a;
printf("a=%d, b=%d\n", a, b);
}
