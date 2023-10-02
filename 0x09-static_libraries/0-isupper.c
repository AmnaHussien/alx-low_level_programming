#include "main.h"
/**
 * _isupper - to determine if the character is upper or not
 * Description: C programm
 * @c: takes input charachter to the function
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
