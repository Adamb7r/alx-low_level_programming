#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers from 0 to 9
 *              and alphabets from a to f
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alph = 'a';
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
