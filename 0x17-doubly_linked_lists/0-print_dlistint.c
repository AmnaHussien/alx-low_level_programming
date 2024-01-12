#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list_t list
 * Description: c programm
 * @h: pointer
 * Return: the size of list
 */
size_t print_dlistint(const dlistint_t *h)
{ size_t counter = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
