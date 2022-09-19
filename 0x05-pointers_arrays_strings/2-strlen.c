#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s : s is string
 * Return: lemgth of string (value is i)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
