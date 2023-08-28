#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: input
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
		int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');
}
