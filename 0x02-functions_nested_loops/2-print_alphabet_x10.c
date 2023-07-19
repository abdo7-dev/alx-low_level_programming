#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
int i = 'a';
int j = 0;
while (j < 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
j++;
_putchar('\n');
}
}
