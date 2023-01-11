#include "main.h"
/**
*_isalpha - checks for alphabetic character is lowercase
*
*Return: returns 1 if c is lowercase and 0 otherwise
*@c: a character argument
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
