File: 0-strcat.c Write a function that concatenates two strings.



Prototype: char *_strcat(char *dest, char *src);

This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte

Returns a pointer to the resulting string dest

File: 1-strncat.c Write a function that concatenates two strings.



Prototype: char *_strncat(char *dest, char *src, int n);

The _strncat function is similar to the _strcat function, except that

it will use at most n bytes from src; and

src does not need to be null-terminated if it contains n or more bytes

Return a pointer to the resulting string dest

File: 2-strncpy.c Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);Your function should work exactly like strncpy

3-strcmp.c Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);

Your function should work exactly like strcmp

4-rev_array.c Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);

Where n is the number of elements of the array

5-string_toupper.c Write a function that changes all lowercase letters of a string to uppercase.

6-cap_string.c Write a function that capitalizes all words of a string.

7-leet.c Write a function that encodes a string into 1337.


