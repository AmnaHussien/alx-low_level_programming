#include "main.h"
/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * Description: C programm
 * @size: takes input charachter to function
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int i, m;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (m = 1; m <= size; m++)
{
if ((i + m) <= size)
{
putchar(' ');
}
else 
{
putchar('#');
}
}
putchar('\n');
}
}
}
