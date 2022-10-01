#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0, s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}

	while (s <= c)
	{
		if (n > 0)
		{
			dest[i] = src[s];
			s++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
