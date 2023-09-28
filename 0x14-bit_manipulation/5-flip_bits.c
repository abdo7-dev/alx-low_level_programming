#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @f: first number
 * @s: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
unsigned long int d;
int count;

d = f ^ s;
count = 0;

while (d)
{
count++;
d &= (d - 1);
}

return (count);
}
