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
char ch = 0;
char CH = 0;
/* print 0-9 */
while  (ch <= 9)
{putchar(ch + 48);
ch++;
}

/* print a-z */
while (CH <= 5)
{putchar(CH + 97);
CH++;
}
putchar('\n');
return (0);
}
