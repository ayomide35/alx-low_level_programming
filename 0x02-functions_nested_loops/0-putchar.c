#include "main.h"

/**
 * main - print _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[5] = "main";
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
