#include "main.h"
/**
 * *_strdup -  function returns pointer to newly allocated space in memory
 * @str: string
 * Returns: 0
 */
char *_strdup(char *str)
{
int l = 0, size = 0;
char *n;
if (str === NULL)
{
return (NULL);
}
for (; str[size] != '\0'; size++)
{
;
}
if (n == 0)
{
return (NULL);
}
else
{
for (; l < size; l++)
n[l] = str[l];
}
return (n);
}
