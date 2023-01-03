#include "main.h"
/**
* _memcpy - copies memory area
* @n: number of byte to copy
* @dest: address of the destination
* @src: address of the source
*
* Return: returns a pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
