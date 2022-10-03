#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (0);
	}
	str = malloc(size);

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	*(str + i) = '\0';

	return (NULL);
}
