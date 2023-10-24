#include "lists.h"
/**
 * *add_nodeint - f function that adds new node at the beginning of list_t lis
 * Description: c programm
 * @head: pointer
 * @n: string
 * Return: the address of new element or 0 if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
if (!head || !ptr)
{ return (NULL); }

ptr->n = n;
ptr->next = NULL;
if (*head)
{ ptr->next = *head; }
*head = ptr;
return (ptr);
}
