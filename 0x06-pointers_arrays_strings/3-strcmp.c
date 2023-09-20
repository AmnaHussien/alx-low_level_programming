#include "main.h"
/**
 * _strcmp -  function that comperes two strings
 * Description: C programm
 * @s1: string input
 * @s2: string input
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{int EQ = 0;
while (*s1)
{
if (*s1 != *s2)
{
EQ = ((int)*s1 - 48) - ((int)*s2 - 48)
break;
}
s1++;
s2++;
}
return (EQ);
}
