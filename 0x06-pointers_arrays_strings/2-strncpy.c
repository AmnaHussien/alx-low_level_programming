#include "main.h"
/**
 * *_strncpy -  function that copies two strings
 * Description: C programm
 * @src: string input
 * @dest: string input
 * @n: most number of byte of src
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{ dest[i] = '\0';
i++;
}
return (dest);
}
