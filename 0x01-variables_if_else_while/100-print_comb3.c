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
  int digit = 0, ch;
 while (digit <= 9)
  {
     ch = 0;
    while (ch <= 9)
       {
            if (digit != ch && digit < ch)
             { 
                putchar(digit + 48);
                putchar(ch + 48);
                if (digit != 8 && ch != 9)
                 {  
                   putchar(',');
                   putchar(' ');
                 }
             }
            ch++;
       }
     digit++;
  }
putchar('\n');
return (0);
}

