#include "lists.h"
int _stlen(char *p);
/**
 * *add_node_end - function that adds new node at the end of list_t list
 * Description: c programm
 * @head: pointer
 * @str: string
 * Return: the address of new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;
list_t *ptr = *head;
temp = malloc(sizeof(list_t));
if (!head || !temp)
{ return (NULL); }
if (str)
{temp->str = strdup(str);
temp->len = _stlen(temp->str);
temp->next = NULL; }
if (ptr)
{
while (ptr->next != NULL)
{ ptr = ptr->next; }
ptr->next = temp;
}
else
{ *head = temp; }
return (temp);
}
