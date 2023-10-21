#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * Description: c programm
 * @head: the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *ptr, *temp;
if (!head)
{ return; }
ptr = head;
while (ptr)
{
temp = ptr->next;
free(ptr->str);
free(ptr);
ptr = temp;
}
}
