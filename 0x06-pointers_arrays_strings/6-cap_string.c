#include "main.h"
/**
 * isLower - function that dtermine if the character is lower
 * Description: C programm
 * @c: input character
 * Return: 1 if true, 0 if false
 */
char isLower(char *c)
{
return (c >= 97 && c <= 122);
}
/**
 * isDlimiter - function that dtermine if the ascii is dlimiter
 * Description: C programm
 * @c: input character
 * Return: 1 if true, 0 if false
 */
int isDlimiter(char c)
{
int i;
char delimiter[] = "\t\n,.!?\"() {}";
for (i = 0; i < 12; i++)
{
if (c == delimiter[i])
{
return (1);
}
}
return (0);
}
/**
 * cap_string - function that  capitalizes all words of a string.
 * Description: C programm
 * @s: input character
 * Return: string with capitalize
 */
char *cap_string(char *s)
{
char *Ptr = s;
int FOUNDDILIMIT = 1;
while (*s)
{
if (isDlimiter(*s))
{
FOUNDDILIMIT = 1;
}
else if (isLower(*s) && FOUNDDILIMIT)
{
*s = *s - 32;
FOUNDDILIMIT = 0;
}
else
{
FOUNDDILIMIT = 0;
}
s++;
}
return (ptr);
}
