#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion -  returns the natural square
 * @a: is a number
 * @b: is a number
 * Return: On success 1.
 * On error, -1 is returned
 */
int sqrt1(int a, int b);
int _sqrt_recursion(int n)
{
return (sqrt1(n, 1));
}
/**
 * sqrt1 - is used to evaluate
 * @a: is a number
 * @b: is a number
  * Return: On success 1.
 * On error, -1 is returned
 */

int sqrt1(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt1(a, b + 1));
}
