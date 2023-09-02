#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: pointers s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int num = 0;

	for (; n > 0; num++)
	{
		s[num] = b;
		n--;
	}
	return (s);
}
