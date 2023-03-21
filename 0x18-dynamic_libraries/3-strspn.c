#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
* @s: is string
* @accept:  is a substring
* Return: returns the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0, flag = 1, j, finder = 0, k = 0;
if (!s || !accept)
return (0);
while (s[k] != '\0' && flag == 1)
{
finder = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
{
finder = 1;
break;
}
}
if (finder == 1)
count++;
if (finder == 0)
{
flag = 0;
break;
}
k++;
}
return (count);
}
