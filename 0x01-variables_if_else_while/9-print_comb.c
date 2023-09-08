#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description:C print 0 ,1 -9
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + 48);
if (i != 9)
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
