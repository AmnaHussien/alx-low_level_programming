#include "lists.h"
/**
 * sum_idlistint - function that summation of data
 * Description: c programm
 * @head: address of pointer to the first node
 * Return: summation
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr;
int summ = 0;
ptr = head;
while (ptr != NULL)
{
summ += ptr->n;
ptr = ptr->next;
}
return (summ);
}
