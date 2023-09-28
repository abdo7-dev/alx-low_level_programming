#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @bit: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *bit, unsigned int index)
{
unsigned long int i;
unsigned int h;

if (index > 64)
return (-1);
h = index;
for (i = 1; h > 0; i *= 2, h--)
;

if ((*bit >> index) & 1)
*bit -= i;

return (1);
}
