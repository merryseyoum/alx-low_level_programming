#include "main.h"
/**
*_strlen_recursion - returns the length of string
* @s: is a string
* Return: on success 1
* on error -1 is returned
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
