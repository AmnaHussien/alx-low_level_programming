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
while (digit <= 99)
{
ch = 0;
while (ch <= 99)
{
ch2 = 0;
while (ch2 <= 99)
{ch3 = 0;
if (digit < ch i&
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


