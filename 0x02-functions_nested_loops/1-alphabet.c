#include <stdio.h>
/**
* print_alphabet - print albhabets 10 times
*
* Return 0 on success
*/
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
