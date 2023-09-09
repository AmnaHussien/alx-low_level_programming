#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: C programm
 * Return: Always 0 (success)
 */
int main(void)
{
int digit = 0, ch, ch2;
while (digit <= 9)
{
ch = 0;
while (ch <= 9)
{
ch2 = 0;
while (ch2 <= 9)
{
if (digit != ch && digit < ch && ch != ch2 && ch < ch2)
{putchar(digit + 48);
putchar(ch + 48);
putchar(ch2 + 48);
if (digit + ch + ch2 != 24)
{putchar(',');
putchar(' ');
}
}
ch2++;
}
ch++;
}
digit++;
}
putchar('\n');
return (0);
}

