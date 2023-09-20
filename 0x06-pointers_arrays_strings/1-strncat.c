#include "main.h"
/**
 * _strncat -  function that concatenates two strings
 * Description: C programm
 * @src: string input
 * @dest: string input
 * @n: most number of byte
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{int i, j;
j = 0;
while (dest[j])
{
j++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
