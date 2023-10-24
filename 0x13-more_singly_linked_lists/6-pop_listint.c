#include "lists.h"
/**
 * pop_listint - function that deletes the head node of listint_t linked list
 * and returns the head node’s data (n)
 * Description: c programm
 * @head: address of pointer to the first node
 * Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int m;
if (!head || !*head)
{ return (0); }
ptr = (*head)->next;
m = (*head)->n;
free(*head);
*head = ptr;
return (m);
}
