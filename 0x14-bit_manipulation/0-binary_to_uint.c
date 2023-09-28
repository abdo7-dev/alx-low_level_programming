#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @bin: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total, power;
int leng;

if (b == NULL)
return (0);

for (leng = 0; b[leng]; leng++)
{
if (b[leng] != '0' && b[leng] != '1')
return (0);
}

for (power = 1, total = 0, leng--; leng >= 0; leng--, power *= 2)
{
if (b[leng] == '1')
total += power;
}

return (total);
}
