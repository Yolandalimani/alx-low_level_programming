#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that compares function with
 * pointer and returns the equal.
 * @s: points a char
 * Return: Returns the function and the operator when equal
**/

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

int x = 0;

while (ops[x].op != NULL)
{
if (!strcmp(ops[x].op, s))
return (ops[x].f);
x++;
}
return (NULL);
}
