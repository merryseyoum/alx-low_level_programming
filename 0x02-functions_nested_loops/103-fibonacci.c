#include <stdio.h>
/**
*main - prints  By starting with 1 and 2, the first 10 terms
*
* Return: Always (Success)
*/
int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%ld\n", sum);
return (0);
}
