#include "main.h"
/**
 * swap_int - swaps the values of two integers using two inputs
 * 
 * @a: input 1
 * @b: input 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
