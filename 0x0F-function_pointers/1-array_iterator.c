#include <stdio.h>
/**
* array_iterator - executes a function given as a parameter
* @array: array of elements
* @size:  is the size of the array
* @action:  is a pointer to the function you need to use
* Return: No
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
