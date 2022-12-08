#include <stdio.h>
#include <unistd.h>
/**
* main - prints using the function
*Return: Always 0 (success)
*/
int main(void)
{
char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, err, 59);
return (1);
}
