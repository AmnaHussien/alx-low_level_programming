#include <stdio.h>
/**
 * main - entry point
 * @argc: number of commandline argument
 * @argv: pointer to array
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
