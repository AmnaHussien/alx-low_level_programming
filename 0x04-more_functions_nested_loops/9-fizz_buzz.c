#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void main(void)
{int n;
for (int i = 1; i <= 100; i++)
{
if (n == 3 * i)
printf("fuzz");
else if (n == 5 * i)
printf("Buzz");
else if ((n == 3 * i) && (n == 5 * i))
printf("FizzBuzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
else
printf("\n");
}
}

