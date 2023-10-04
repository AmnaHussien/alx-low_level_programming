#include "main.h"
/**
 * **alloc_grid - function returns pointer to 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: two dimentional array
 */
int **alloc_grid(int width, int height)
{
int **tabb, ii, jj;
tabb = malloc(sizeof(*tabb) * height);
if (width <= 0 || height <= 0 || tabb ==0)
{
return (NULL);
}
else
{
for (ii =0; ii < height ; ii++)
{
tabb[ii] = malloc(sizeof(**tabb) * width);
if (tabb[ii] == 0)
{
while (ii--)
{
free(tabb[ii]);
}
free(tabb);
return (NULL);
}
for (jj = 0; jj < width; jj++)
{
tabb[ii][jj] = 0;
}
}
}
return (tabb);
}
