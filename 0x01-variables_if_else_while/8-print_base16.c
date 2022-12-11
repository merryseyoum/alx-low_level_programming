#include <stdio.h>
/**
*main - This program will print 16 bas numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
