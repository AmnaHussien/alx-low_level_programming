#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main _ Entry point
 * Description:C print 0 ,1 -9
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + 48);
if (i != 9)
printf(',');
printf(' ');
i++;
}
return (0);
}
