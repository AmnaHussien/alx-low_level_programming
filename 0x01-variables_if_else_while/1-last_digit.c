#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description:C program
 * Return: Always 0 (success)
 */
int main(void)
{
int n, ch;
srand(time(0));
n = rand() - RAND_MAX / 2;
ch = n % 10;
if (ch > 5)
{printf("Last digit of %i is %i and is  greater than 5\n", n, ch);
}
else if (ch == 0)
{printf("Last digit of %i is %i and is 0\n", n, ch);
}
else if (ch < 6 && ch != 0)
{printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ch);
}
putchar('\n');
return (0);

}
