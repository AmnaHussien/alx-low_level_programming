#include "main.h"
/**
 * _puts - function that prints the string
 * Description: C programm
 * @str: character  string input types
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
printf("%s\n", *str);
str++;
}
printf("\n");
}
