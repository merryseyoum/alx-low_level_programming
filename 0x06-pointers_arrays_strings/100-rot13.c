#include "main.h"
/**
* rot13 - encodes a string using rot13.
* @str: is a pointer
* Return: returnd str
*/
char *rot13(char *str)
{
char regALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char altALPHA[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; regALPHA[j] != '\0'; j++)
{
if (str[i] == regALPHA[j])
{
str[i] = altALPHA[j];
break;
}
}
}
return (str);
}
