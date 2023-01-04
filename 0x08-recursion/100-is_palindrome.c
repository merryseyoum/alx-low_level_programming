#include "main.h"
/**
* is_palindrome -  returns a string is a palindrome
* @a: string
* @l: integer to count length
* Return: On success 1.
* On error, -1 is returned
*/
int palind2(char *a, int l);
int palind3(char *a, int l);
int is_palindrome(char *s)
{
int l;
l = palind2(s, 0);
return (palind3(s, l));
}
/**
* palind2 - obtains length
* @a: string
* @l: integer to count length
* Return: On success 1.
* On error, -1 is returned,
*/
int palind2(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (palind2(a + 1, l + 1));
}
/**
* palind3 - compares string vs string reverse
* @a: string
* @l: length
* Return: On success 1.
* On error, -1 is returned
*/
int palind3(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (palind3(a + 1, l - 2));
}
