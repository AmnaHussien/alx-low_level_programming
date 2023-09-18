#include "main.h"
/**
 * _puts - function that prints the string
 * Description: C programm
 * @str: character  string input types
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
char counter;
for (counter = 0; *str != 0; str++)
{
printf("%s \n", str);
counter++;
}
}
