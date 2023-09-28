#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @bin: decimal number to print as binary
 */
void print_binary(unsigned long int bin)
{
unsigned long int temp;
int shifts;

if (bin == 0)
{
printf("0");
return;
}
for (temp = bin, shifts = 0; (temp >>= 1) > 0; shifts++)
;
for (; shifts >= 0; shifts--)
{
if ((bin >> shifts) & 1)
printf("1");
else
printf("0");
}
}
