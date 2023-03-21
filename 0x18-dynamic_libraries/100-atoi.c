#include "main.h"
/**
*_atoi - converts a string to an integer
*@s:is string
*Return: returns i* n
*/
int _atoi(char *s)
{
int n = 1;
unsigned int i = 0;
for (; *s; s++)
{
if (*s >= '0' && *s <= '9')
{
i = i * 10;
i = i + *s - '0';
}
else if (i > 0)
break;
else if (*s == '-')
n = n * -1;
}
return (i *n);
}
