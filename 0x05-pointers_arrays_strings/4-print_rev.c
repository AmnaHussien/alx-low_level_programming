#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * Description: C programm
 * @s: character  string input types
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{int counter;
while (s[counter])
{
counter++;
}
while (counter--)
{
_putchar(s[counter]);
}
_putchar('\n');
}
