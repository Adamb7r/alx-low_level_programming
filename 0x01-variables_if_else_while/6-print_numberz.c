#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers from 0 to 9 using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
