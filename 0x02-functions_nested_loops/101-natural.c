#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: C programm
 * Return: Always 0 (success)
 */
int main(void)
{int n, i;
for (i = 0; i < 1024; i++)
{
if ((i % 3 ==  0) || (i % 5  == 0))
{
n += i;
}
}
printf("%d\n", n);
return (0);
}
