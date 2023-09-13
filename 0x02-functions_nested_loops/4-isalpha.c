#include "main.h"
/**
 * _isalpha - check is the character is letter or not
 * Description: to determine if the character is in lower or upper case
 * or it is not a letter
 * Return: 1 if c is letter, 0 otherwise
 * @c: to check the input of the function
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
