#include "main.h"
/**
 * print_alphabet_x10 - function  print alphabet from a to z 10 time
 * Description: print alphabet 10 time
 */
void  print_alphabet_x10(void)
{
int ch, i;
for (i = 1; i <= 10 ; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
