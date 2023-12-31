#include "main.h"
#include <stdio.h>
/**
 * last_index - return the last index of string
 * @s: pointer
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int startt, int endd, int modd);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
{
n += last_index(s + 1) + 1;
}
return (n);
}
/**
 * is_palindrome - check if the string is palindrome
 * @s: string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
}
/**
 * check - checker for palindrome
 * @s: string
 * @startt: int moves from right to left
 * @endd: int moves from left to right
 * @modd: int
 * Return: 0 or 1
 */
int check(char *s, int startt, int endd, int modd)
{
if ((startt == endd && modd != 0) || (startt == endd + 1 && modd == 0))
{
return (1);
}
else if (s[startt] != s[endd])
{
return (0);
}
else
{
return (check(s, startt + 1, endd - 1, modd));
}
}
