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
 * *add_node_end - function that adds new node at the end of list_t list
 * Description: c programm
 * @head: pointer
 * @str: string
 * Return: the address of new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr, *temp;
ptr = *head;
temp = malloc(sizeof(list_t));
if (!temp)
{ return (NULL); }
if (str)
{temp->str = strdup(str); }
temp->len = _stlen(temp->str);
temp->next = NULL;
while (ptr->next != NULL)
{ ptr = ptr->next; }
ptr->next = temp;
return (temp);
}
