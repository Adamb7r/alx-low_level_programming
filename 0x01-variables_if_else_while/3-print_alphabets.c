#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lower case
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a', chh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (chh <= 'Z')
	{
		putchar(chh);
		chh++;
	}

	putchar('\n');

	return (0);
}
