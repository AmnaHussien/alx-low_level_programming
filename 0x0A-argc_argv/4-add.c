#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of command line argument
 * @argv: array of pointerto argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int summ = 0;
char *cc;
while (--argc)
{
for (cc = argv[argc]; *cc; cc++)
{
if (*cc < '0' || *cc > '9')
{
return (printf("Error\n"), 1);
}
}
summ += atoi(argv[argc]);
}
printf("%d\n", summ);
return (0);
}
