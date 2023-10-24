#include "lists.h"
/**
 * _stlen - function that return the length of string
 * Description: c programm
 * @p: character
 * Return: the length of string
 */
int _stlen(int *p)
{
int count = 0;
if (!p)
{ return (0); }
while (*p++)
{ count++; }
return (count);
}
