#include "function_pointers.h"
/**
 * print_name - print name
 * Description: c programm
 * @name: name
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == 0 || f == 0)
{
return;
}
(*f)(name);
}
