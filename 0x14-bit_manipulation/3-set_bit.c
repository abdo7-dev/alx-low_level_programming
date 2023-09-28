#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @bit: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *bit, unsigned int index)
{
unsigned long int x;
if (index > 64)
return (-1);
for (x = 1; index > 0; index--, x *= 2)
;
*bit += x;
return (1);
}
