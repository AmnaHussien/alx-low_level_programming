#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * Description: C programm
 * @a: string type
 * @n: string type
 * Return: nothing
 */
void print_array(int *a, int n)
{int m;
for (m = 0; m < n; m++)
{
if (m != (n - 1))
{
printf("%d, ", a[m]);
}
else
{
printf("%d", a[m]);
}
}
printf("\n");
}
