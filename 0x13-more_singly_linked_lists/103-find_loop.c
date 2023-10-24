#include "lists.h"
/**
 * find_listint_loop - function that loop in the linked list
 * Description: c programm
 * @head: address of pointer to the first node
 * Return: the address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint *ptr, *end;
if (head == 0)
{ return (0); }
for(end = head->next; end != 0; end->next)
{
if(endd == endd->next)
{ return (endd); }
for (ptr = head; ptr != endd; ptr = ptr->next)
{
if (ptr == endd->next)
{ return (endd->next); }
}
}
return (0);
}
