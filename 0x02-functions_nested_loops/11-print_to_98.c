#include "main.h"
/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * Description: programm that prints all natural numbers from n to 98
 *  followed by a new line.
 * @n: input
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
int counter;
if (n > 98)
for (counter = n; counter > 98; counter--)
{
printf("%d, ", counter);
}
else
{
for (counter = n; counter < 98; counter++)
{
printf("%d, ", counter);
}
}
printf("98\n");
}
