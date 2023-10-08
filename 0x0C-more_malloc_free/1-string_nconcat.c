#include "main.h"
/**
 * _strlen - find the length of string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
int size = 0;
for (;s[size] != '\0'; size++)
{
;
}
return (size);
}
/**
 * string_nconcat _ cancat two string
 * Description: c programm
 * @s1: point to first string
 * @s2: point to second string
 * @n: num of bytes of s2 we want to cocat it
 * Return: concatenting string
 */
char *string_nconcat(char  *s1, char *s2, unsigned int n)
{
size1 = _strlen(s1);
size2 = _strlen(s2);
m = malloc(size1 + n + 1)
if (m == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
m[i]= s1[i];
}
for (j = 0; j < n; j++)
{
m[i] = s2[j];
i++;
}
m[i] = '\0';
return (m);
}
