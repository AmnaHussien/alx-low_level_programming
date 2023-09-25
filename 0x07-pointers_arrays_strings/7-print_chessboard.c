#include "main.h"
#include<stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers
 * Description: C programm
 * @a: two dimention array of int type 
 * @size: size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, l = 0, k = 0;
for(i = 0; i < size; i++)
{
l += a[i];
k += a[size - i - 1];
a += size;
}
printf("%d, ", l);
printf("%d\n", k);
}
