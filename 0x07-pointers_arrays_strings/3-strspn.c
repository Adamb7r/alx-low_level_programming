#include "main.h"

/**
 * _strspn - Entry point
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				num++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
