#include "lists.h"
/**
 * get_nodeint_at_index - function that frees list of integer
 * Description: c programm
 * @head: address of pointer to the first node
 * @index: the index
 * Return: nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr;
unsigned int i;
for (ptr = head, i = 0; ptr && i < index; ptr = ptr->next, i++)
{ ; }
return (ptr);
}
