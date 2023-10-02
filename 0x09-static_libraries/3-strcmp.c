#include "main.h"
/**
 * _strcmp -  function that comperes two strings
 * Description: C programm
 * @s1: string input
 * @s2: string input
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
