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
int sum;
char p;
srand(time(NULL));
while (sum <= 2645)
{p = rand() % 128;
sum += p;
putchar(p);
}
putchar(2772 - sum);
return (0);
}
