#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * Description: C programm
 * @s: character input types
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
int  counter;
for (counter = 0; *s != '\0'; s++)
{
counter++;
}
return (counter);
}

