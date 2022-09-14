#include "main.h"

/**
 * 100_times_table - print the 100 times table
 * @n: integer for which the times table will be printed
 *
 * Description: print 100 times tables
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, column, d;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar ('0');

			for (column = 1; column <= n; column++)
			{
				_putchar(',');
				_putchar(' ');
				d = row * column;

				if (d <= 99)
					_putchar(' ');
				if (d <= 9)
					_putchar(' ');
				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

