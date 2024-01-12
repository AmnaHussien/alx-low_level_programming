#include "lists.h"
/**
 * free_dlistint - function that frees list of integer
 * Description: c programm
 * @head: pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
listint_t *ptr;

while (head)
{ ptr = head;
head = head->next;
free(ptr);
}
}

