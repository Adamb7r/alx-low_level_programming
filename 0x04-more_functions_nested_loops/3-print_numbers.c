#include "main.h"

/**
 * print_numbers - print digit (0 - 9).
 *
 * Return: Always 0.
*/

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}