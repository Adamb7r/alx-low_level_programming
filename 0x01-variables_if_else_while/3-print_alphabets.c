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
	char ch, chh;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		for (chh = 'A'; chh <= 'Z'; chh++)
			putchar(chh);

	putchar('\n');

	return (0);
}
