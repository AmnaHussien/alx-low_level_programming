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
int digit = 0, ch, ch2, ch3;
while (digit <= 9)
{
ch = 0;
while (ch <= 9)
{
ch2 = 0;
while (ch2 <= 9)
{ch3 = 0;
if (digit < ch &&
ch < ch2 && ch2 < ch3)
{putchar(digit + 48);
putchar(ch + 48);
putchar(' ');
putchar(ch2 + 48);
putchar(ch3 + 48);
if (digit + ch + ch2 + ch3 != 116)
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


