#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number to start counting from 98
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
}else
{
	printf("98");
}
printf("\n");
}
