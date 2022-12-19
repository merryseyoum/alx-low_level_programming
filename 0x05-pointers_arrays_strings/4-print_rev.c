#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: is a string
*/
void print_rev(char *s)
{
int a, ln;
for (ln = 0; *s != '\0'; s++)
ln++;
s--;
for (a = 0; a < ln; a++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
