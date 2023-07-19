#include "main.h"
/**
 * main - print _putchar, followed by new line
 * Return: 0
 */
int main(void)
{
char result[] = "_putchar";
for (int i = 0; i <= sizeof(result) / sizeof(char); i++)
{
putchar(result[i]);
}
putchar('\n');
return (0);
}
