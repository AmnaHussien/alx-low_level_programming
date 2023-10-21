#include "lists.h"
/**
 * _stlen - function that return the length of string
 * Description: c programm
 * @p: character
 * Return: the length of string
 */
int _stlen(char *p)
{
int count = 0;
if (!p)
{ return (0); }
while (*p++)
{ count++; }
return (count);
}
/**
 * print_list - function that prints all the elements of a list_t list
 * Description: c programm
 * @h: pointer
 * Return: the size of list
 */
size_t print_list(const list_t *h)
{ size_t counter = 0;


while (h)
{
printf("[%d] %s\n", _stlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
counter++;
}
return (counter);
}
