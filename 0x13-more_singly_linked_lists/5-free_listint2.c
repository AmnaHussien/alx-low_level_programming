#include "lists.h"
/**
 * free_listint2 - function that frees list of integer
 * Description: c programm
 * @head: address of pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *ptr, *temp;
ptr = *head;
while (ptr)
{
temp = ptr;
ptr = ptr->next;
free(temp);
}
*head = NULL;
}
