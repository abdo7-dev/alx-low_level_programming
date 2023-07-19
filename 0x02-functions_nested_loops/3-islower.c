#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: int
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
return (0);
_putchar('\n');
}
