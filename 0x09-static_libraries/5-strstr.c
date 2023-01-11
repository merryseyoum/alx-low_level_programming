#include "main.h"
/**
 * _strstr -  locates a substring.
 * @needle: occurence to find
 * @haystack: string to search
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{

while (*haystack)
{
char *src = haystack;
char *sub = needle;

while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
return (src);
haystack = src + 1;
}
return (0);
}
