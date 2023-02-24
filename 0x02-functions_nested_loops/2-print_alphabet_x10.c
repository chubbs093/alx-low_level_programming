#include "main.h"
/**
* print_alphabet_x10 - print albhabets 10 times
*
* Return 0 on success
*/
void print_alphabet_x10(void)
{
int i = 0;
int j;

while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
i++;
_putchar('\n');
}
}
