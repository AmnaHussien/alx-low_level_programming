#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node at
 * index index of a listint_t linked list.
 * Description: c programm
 * @index: is the index of the node that should be deleted
 * @head: address of pointer to the first node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *previ_ptr;
unsigned int j = 0;
if (!head || !*head)
{ return (-1); }
if (!index)
{
ptr = *head;
*head = (*head)->next;
free(ptr);
return (1);
}
ptr = *head;
while (ptr != NULL)
{
if (j == index)
{
previ_ptr->next = ptr->next;
free(ptr);
return (1);
}
j++;
previ_ptr = ptr;
ptr = ptr->next;

}
return (-1);
}
