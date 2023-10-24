#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list_t list
 * Description: c programm
 * @h: pointer
 * Return: the size of list
 */
size_t print_listint(const listint_t *h)
{ size_t counter = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
