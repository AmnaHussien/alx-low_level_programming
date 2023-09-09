#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: C programm
 *Return: Always 0 (success)
 */
int main(void)
{int digit = 0, ch;
while (digit <= 99)
{
digit = ch;
while (ch <= 99)
{
if (digit != ch)
{
putchar((digit / 10) + 48);
putchar ((digit % 10) + 48);
putchar(' ');
putchar((ch / 10) + 48);
putchar((ch % 10) + 48);
if (digit != 98 || ch != 99)
{
putchar(',');
putchar(' ');
}
}
ch++;
}
digit++;
}
putchar('\n');
return (0);
}
