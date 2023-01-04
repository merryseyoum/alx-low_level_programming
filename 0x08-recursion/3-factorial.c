#include "main.h"
/**
* factorial - returns factorial of a given number
* @n: is an integer number
* Return: On success 1.
* On error, -1 is returned
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
