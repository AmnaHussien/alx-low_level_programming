#include "main.h"
/**
 * _islower - function check if a charackter is in lower case
 * @c: check the input of function
 * Description: to check the alphabet if it in lower case or not
 * Return: return 1 if it is in lower case otherwise return 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
