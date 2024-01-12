#include "lists.h"

/**
 * *add_dnodeint_end - function that adds new node at the end of list_t list
 * Description: c programm
 * @head: pointer
 * @n: string
 * Return: the address of new element or null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *ptr;
if (!head || !temp)
{ return (NULL); }

temp->n = n;
temp->next = NULL;
if (!*head)
{ 
temp->prev = NULL;		
*head = temp; }
else
{ ptr = *head;
while (ptr->next != NULL)
{ ptr = ptr->next; }
ptr->next = temp;
temp->prev = ptr
}
return (temp);
}
