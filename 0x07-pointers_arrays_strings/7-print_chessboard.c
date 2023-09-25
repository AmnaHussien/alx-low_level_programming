#include "main.h"
/**
 * print_cheseboard -  function that prints the chessboard
 * Description: C programm
 * @a: the rows
 * Return: nothing
 */
void print_cheseboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
