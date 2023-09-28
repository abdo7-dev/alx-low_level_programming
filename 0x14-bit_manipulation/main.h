#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
unsigned int binary_to_uint(const char *bin);
void print_binary(unsigned long int bit);
int get_bit(unsigned long int bit, unsigned int index);
int set_bit(unsigned long int *bit, unsigned int index);
int clear_bit(unsigned long int *bit, unsigned int index);
unsigned int flip_bits(unsigned long int f, unsigned long int s);
int get_endianness(void);
#endif
