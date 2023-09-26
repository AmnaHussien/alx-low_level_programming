#include "main.h"
/**
 * _strstr -  function that locates a substring
 * Description: C programm
 * @haystack: input
 * @needle: input
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *o = haystack;
char *t = needle;
while (*o == *t && *t != '\0')
{
o++;
t++;
}
if (*t == '\0')
{
return (haystack);
}
}
return (NULL);
}
