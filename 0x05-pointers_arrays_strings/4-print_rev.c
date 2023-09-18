#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * Description: C programm
 * @s: character  string input types
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{char counter;
for (counter = 0; *s != '\0'; s++)
{
_putchar(*s + 0);
counter--;
}
_putchar('\n');
}
