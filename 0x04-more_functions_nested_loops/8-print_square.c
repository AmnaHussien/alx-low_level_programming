#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * Description: C programm
 * @size: takes integer type to input function
 * Return: Always 0 (success)
 */
void print_square(int size)
{
int i, m;
if (size <= 0)
{
printf('\n');
}
for (i = 1; i <= size; i++)
{
for (m = 1; m <= size; m++)
{
putchar('#');
}
putchar('\n');
}
}
