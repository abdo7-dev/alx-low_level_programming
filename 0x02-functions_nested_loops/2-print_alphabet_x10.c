#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
for (int j = 0; j < 10; j++)
{
for (char i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
return (0);
}
