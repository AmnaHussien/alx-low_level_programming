#include "lists.h"
int _stlen(char *p);
/**
 * *add_node - f function that adds new node at the beginning of list_t lis
 * Description: c programm
 * @head: pointer
 * @str: string
 * Return: the address of new element or 0 if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr = malloc(sizeof(list_t));
if (!head || !ptr)
{ return (NULL); }
if (str)
{
ptr->str = strdup(str);
ptr->next = NULL;
ptr->len = _stlen(ptr->str);
}
ptr->next = *head;
*head = ptr;
return (ptr);
}
