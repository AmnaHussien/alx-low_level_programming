#include "lists.h"
/**
 * sum_listint - function that summation of data
 * Description: c programm
 * @head: address of pointer to the first node
 * Return: summation
 */
int sum_listint(listint_t *head)
{
listint_t *ptr;
int summ = 0;
ptr = head;
while (ptr != NULL)
{
summ += ptr->n;
ptr = ptr->next;
}
return (summ);
}
