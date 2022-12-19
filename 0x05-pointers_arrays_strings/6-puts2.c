#include "main.h"
/**
*puts2 - prints every other character of string
*@str: is a string
*/
void puts2(char *str)
{
int a;
for (a = 0; *str != '\0'; str++, a++)
{
if (a % 2 == 0)
_putchar(*str);
}
_putchar('\n');
}
