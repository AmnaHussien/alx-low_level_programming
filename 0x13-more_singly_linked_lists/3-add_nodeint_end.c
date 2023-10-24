#include "lists.h"

/**
 * *add_nodeint_end - function that adds new node at the end of list_t list
 * Description: c programm
 * @head: pointer
 * @str: string
 * Return: the address of new element or null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *ptr = *head;
temp = malloc(sizeof(listint_t));
if (!head || !temp)
{ return (NULL); }

temp->n = n;

temp->next = NULL;
ptr = *head;
while (ptr->next != NULL)
{ ptr = ptr->next; }
ptr->next = temp;

return (temp);
}
