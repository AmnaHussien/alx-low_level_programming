#include "lists.h"
/**
 * _stlen - function that return the length of string
 * Description: c programm
 * @p: character
 * Return: the length of string
 */
int _stlen(char *p)
{
int count = 0;
if (!p)
{ return (0); }
while (*p++)
{ count++; }
return (count);
}
/**
 * *add_node - f function that adds new node at the beginning of list_t lis
 * Description: c programm
 * @head: pointer
 * @str: string
 * Return: the nodes
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
