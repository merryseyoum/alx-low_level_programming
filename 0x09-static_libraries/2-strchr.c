#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: is an address of string
 * @c: is character to be located
 * Return: address where @c is find or null
 */
char *_strchr(char *s, char c)
{
while (*s)
{
s++;
if (*s == c)
{
return (s);
}
}
return (0);
}
