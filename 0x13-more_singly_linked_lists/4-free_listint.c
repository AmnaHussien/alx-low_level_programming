#include "lists.h"
/**
 * free_listint - function that frees list of integer
 * Description: c programm
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
ptr = head;
while (head)
{
head = head->next;
free(ptr);
}
}
