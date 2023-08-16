#include "function_pointers.h"

/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
#ifndef _HEADER_
#define _HEADER_
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
return (i);

i++;
}
}
}

return (-1);
}
