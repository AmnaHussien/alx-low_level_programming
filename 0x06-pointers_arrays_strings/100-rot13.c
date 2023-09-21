#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * Description: C programm
 * @str: input character
 * Return: string that is encodes
 */
char *rot13(char *str)
{int i;
char rot13[] = "abcdefghijklmnopqrstuvwx
yzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijk
lmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = str;
while (*str)
{
for (i = 0; i <= 52; i++)
{
if (*str == rot13[i])
{
*str = ROT13[i];
break;
}}
str++;
}
return (ptr);
}
