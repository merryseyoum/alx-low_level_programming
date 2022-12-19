#include "main.h"
/**
* swap_int - the function swaps the values of two integers
* @a: First integer to swap
* @b: Second integer to swap
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
