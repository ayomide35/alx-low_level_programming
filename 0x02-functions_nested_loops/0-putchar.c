#include "main.h"

/**
 * main - print main.h
 *
 * Description: prints main.h
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "main";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
