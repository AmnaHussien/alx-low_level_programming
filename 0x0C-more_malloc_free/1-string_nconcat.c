#include "main.h"
/**
 * string_nconcat - cancat two string
 * Description: c programm
 * @s1: point to first string
 * @s2: point to second string
 * @n: num of bytes of s2 we want to cocat it
 * Return: concatenting string
 */
char *string_nconcat(char  *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1, size2;
if (s1 == 0)
{
s1 == "";
}
if (s2 == 0)
{
s2 = "";
}
for (size1 = 0; s1[size1] != '\0'; size1++)
{
;
}
for (size2 = 0; s2[size2] != '\0'; size2++)
{
;
}
m = malloc(size1 + n + 1);
if (m == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
m[i] = s1[i];
}
for (j = 0; j < n; j++)
{
m[i] = s2[j];
i++;
}
m[i] = '\0';
return (m);
}
