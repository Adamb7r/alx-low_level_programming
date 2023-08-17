#include "main.h"

/**
 * print_square - prints a square by using the character
 * @size: the size of the square
 * Return: Always 0.
*/

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			_putchar('#');
		_putchar('\n');
	}
}
