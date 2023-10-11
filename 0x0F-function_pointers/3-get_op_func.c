#include "calc.h"
/**
 * get_op_func -  perform the operation asked by the user
 * Description: c programm
 * @s: character
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != '\0' && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].ff);
}
