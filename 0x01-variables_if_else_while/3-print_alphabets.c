#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: C programm
 *Return: Always 0 (success)
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{putchar(ch);
ch++;
}
while (CH <= 'z')
{putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
