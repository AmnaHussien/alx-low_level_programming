#include "main.h"
/**
 * cap_string - function that  capitalizes all words of a string.
 * Description: C programm
 * @str: input character
 * Return: string with capitalize
 */
char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
{
index++;
}
if (str[index - 1] == '' || str[index - 1] == '\t' ||
str[index - 1] == ',' || str[index - 1] == ';' ||
str[index - 1] == '.' || str[index - 1] == '!' ||
str[index - 1] == '?' || str[index - 1] == '"' ||
str[index - 1] == '(' || str[index - 1] == ')' ||
str[index - 1] == '{' || str[index - 1] == '}' || index == 0)
str[index] -= 32;
index++;
}
return (str);
}
