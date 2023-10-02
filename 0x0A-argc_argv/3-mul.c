#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of command line argument 
 * @argv: pointer to an array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int summ;
if (argc == 3)
{
summ = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", summ);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
