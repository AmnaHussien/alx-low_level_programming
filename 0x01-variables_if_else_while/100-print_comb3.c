#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: C programm
 *Return: Always 0 (success)
 */
int main(void)
{int digit = 0, ch = 0;
while (digit <= 9)
{
putchar(digit + 48);
while (ch <= 9)
{
if (digit % 10 != ch % 100)
putchar(ch + 48);
digit++;
ch++;
}}
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
