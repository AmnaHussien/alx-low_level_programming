#include "main.h"
/**
 * set_string -  function that sets the value of a pointer to a char
 * Description: C programm
 * @s: pointer to pointer
 * @to: pointer char
 * Return: always 0 (success)
 */
void set_string(char **s, char *to)
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
