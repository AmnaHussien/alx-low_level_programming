#include "lists.h"
/**
 * listint_len - function that return  number of elements in linked list_t
 * Description: c programm
 * @h: pointer
 * Return: the numb of elements
 */
size_t listint_len(const listint_t *h)
{
int counter = 0;
const listint_t *ptr = NULL;
ptr = h;
while (ptr)
{
ptr = ptr->next;
counter++;
}
return (counter);
}
