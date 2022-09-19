#include "main.h"

/**
 * reset_to_98 - check the code
 * @n : n is the pointer of n and return value 98
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
