#include "main.h"
/**
 * free_grid - function frees 2 dimensional grid previously created
 * @grid: grid of memories
 * @height: integer
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int m = 0;
for (; m < height; m++)
{
free(grid[m]);
}
free(grid);
}
