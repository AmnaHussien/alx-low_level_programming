#include "main.h"
/**
 * _strcat -  function that concatenates two strings
 * Description: C programm
 * @src: string input
 * @dest: string input
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{int i, j;
j = 0;
while (dest[j])
{
j++;
}
i = 0;
while (src[i], i++)
{
dest[j++] = src[i];
}
return (dest);
}
