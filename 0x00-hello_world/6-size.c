#include <stdio.h>

int main(void)
{
	
	int i;
	char c;
	float f;
	long l;

	printf("Size of a char: %l.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %l.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %l.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %l.\n", (unsigned long)sizeof(t));
	printf("Size of a float: %l.\n", (unsigned long)sizeof(f));
	
	return (0);
}
