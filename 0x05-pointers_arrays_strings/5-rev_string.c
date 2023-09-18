#include "main.h"
/**
 * rev_string - function that reverses a string.
 * Description: C programm
 * @s: character  string input types
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
char count;
int l, i;
for (l = 0; s[l] != '\0'; ++l)
{
;
}
for (i = 0; i < l / 2; i++)
{
count = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = count;
}
}
