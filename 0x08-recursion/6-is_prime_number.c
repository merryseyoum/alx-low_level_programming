#include "main.h"
/**
* is_prime_number - returns 1 if the input integer is a prime number
* @a: same number as n
* @b: number that iterates from 1 to n
* Return: On success 1.
* On error, -1 is returned
*/
int prime1(int a, int b);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime1(n, 2));
}
/**
* prime1 - used to evaluate
* @a: same number as n
* @b: number that iterates from 1 to n
* Return: On success 1.
* On error, -1 is returned
*/
int prime1(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime1(a, b + 1));
}
