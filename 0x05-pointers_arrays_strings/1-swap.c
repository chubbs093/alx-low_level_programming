/**
 * swap_int - swaps the value of two integers.
 * @a: First number to swap.
 * @b: Second number to swap.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
