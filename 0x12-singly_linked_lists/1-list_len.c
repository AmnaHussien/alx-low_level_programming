#include "lists.h"
int _stlen(char *p);
/**
 * list_len -  function that return  number of elements in linked list_t list
 * Description: c programm
 * @h: pointer
 * Return: the numb of elements
 */
size_t list_len(const list_t *h)
{
size_t counter;
while (h)
{
printf("[%d] %s\n", _stlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
counter++;
}
return (counter);
}
