#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts new node at given position
 * Description: c programm
 * @head: address of pointer to the first node
 * @idx: the index of the list where the new node should be added.
 * @n: n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr;
listint_t *temp = malloc(sizeof(listint_t));
unsigned int j;

if (!head || !*head)
{ return (0); }
temp->n = n;
temp->next = NULL;

if (!idx)
{
temp->next = *head;
*head = temp;
return (temp);
}
ptr = *head;
while (ptr)
{
if (j == idx - 1)
{
temp->next = ptr->next;
ptr->next = temp;
return (temp);
}
j++;
ptr = ptr->next;
}
free(temp);
return (NULL);
}
