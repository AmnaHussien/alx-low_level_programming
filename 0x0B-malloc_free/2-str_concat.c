#include "main.h"
/**
 * _strlen - find the length of string
 * @ss: string
 * Return: int
 */
int _strlen(char *ss)
{
int size = 0;
for (; ss[size] != '\0'; size++)
{
;
}
return (size);
}

/**
 * *str_concat - concatenetes two string
 * @s1: string1
 * @s2: string2
 * Return:pointer
 */
char *str_concat(char *s1, char *s2)
{
int size11, size22, ii;
char *mm;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
size11 = _strlen(s1);
size22 = _strlen(s2);
mm = malloc((size11 + size22) * (sizeof(char) + 1));
if (mm == 0)
{
return (0);
}
for (ii = 0; ii <= size11 + size22; ii++)
{
if (ii < size11)
{
mm[ii] = s1[ii];
}
else
{
mm[ii] = s2[ii - size11];
}
}
mm[ii] = '\0';
return (mm);
}
