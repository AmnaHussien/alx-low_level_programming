#include "lists.h"
/**
 * *add_dnodeint - function that adds new node at the beginning of list_t lis
 * Description: c programm
 * @head: pointer
 * @n: string
 * Return: the address of new element or 0 if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *ptr = malloc(sizeof(dlistint_t));
if (!head || !ptr)
{ return (NULL); }

ptr->n = n;
ptr->next = NULL;
if (*head)
{ ptr->next = *head; }
*head = ptr;
return (ptr);
}
