#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create an array
 * @size: array size to allocate
 * @c: the character to put in the array
 *
 * Return: a char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myArray;

	myArray = malloc(sizeof(char) * size);
	if (size == 0 || myArray == NULL)
		return (NULL);

	for (i = 0; i < size;  i++)
		myArray[i] = c;
	return (myArray);
}
