#include "main.h"
#include <stdio.h>
/**
* print_array - prints n element of an array of integers
* @a: is a string
* @n: is an element
*/
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b + 1 != n)
printf(", ");
}
printf("\n");
}
