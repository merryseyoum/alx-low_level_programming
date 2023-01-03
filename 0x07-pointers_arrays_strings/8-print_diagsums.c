#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sums of diagonals
* @a: pointer to an array
* @size: size of the matrix
* Return: returns void
*/
void print_diagsums(int *a, int size)
{
int i, sum, sum2;
sum = sum2 = 0;
for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
}
for (i = 0; i < size; i++)
{
sum2 += a[(i * size) + size - (i + 1)];
}
printf("%d, %d\n", sum, sum2);
}
