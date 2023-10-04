#include "main.h"
/**
 * _strlen - find the length of string
 * @ss: string
 * Return: int
 */
int _strlen(char *ss)
{
int size = 0;
for (; ss[size] != '\0'; size++)
{
;
}
return (size);
}
/**
 * *argstostr - description
 * @ac: int
 * @av: parameter
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int ii = 0, nc = 0, jj = 0, cmp = 0;
char *ss;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (; ii < ac; ii++, nc++)
{
nc += _strlen(av[ii]);
}
ss = malloc(sizeof(char) * nc + 1);
if (ss == 0)
{
return (NULL);
}
for (ii = 0; ii < ac; ii++)
{
for (jj = 0; av[ii][jj] != '\0'; jj++, cmp++)
{
ss[cmp] = av[ii][jj];
}
ss[cmp] = '\n';
cmp++;
}
ss[cmp] = '\0';
return (ss);
}
