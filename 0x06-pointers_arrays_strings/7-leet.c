#include "main.h"
/**
 * leet - function that encode string into 1337
 * Description: C programm
 * @c: input character
 * Return: string that is encodes
 */
char *leet(char *c)
{
char *cp = c;
char KEY[] = {'A', 'E', 'O', 'T', 'L'};
int VALUE = {4, 3, 0, 7, 1};
unsigned int i;
while (*c)
{
for (i = 0; i < sizeof(KEY) / sizeof(char); i++)
{
if (*c == KEY[i] || *c == KEY[i] + 32)
{
*c = 48 + VALUE[i];
}
}
c++;
}
return (cp);
}
