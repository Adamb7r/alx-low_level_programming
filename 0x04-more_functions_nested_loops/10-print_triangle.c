include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int high, base;

	if (size > 0)
	{
		for (high = 1; high <= size; high++)
		{
			for (base = size - high; base > 0; base--)
			{
				_putchar(' ');
			}
			for (base = 0; base < high; base++)
			{
				_putchar('#');
			}
			if (high == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
