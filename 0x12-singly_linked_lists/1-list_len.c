#include "lists.h"
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
counter++;
h = h->next;

}
return (counter);
}
