#include "holberton.h"
/**
 * print_numbers - prints the digits 1-9
 */

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
putchar(i + '0');
++i;
}
_putchar('\n');
}
