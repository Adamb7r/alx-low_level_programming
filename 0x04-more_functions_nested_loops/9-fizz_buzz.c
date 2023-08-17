#include "main.h"

/**
 * main - prints numbers from 1 - 100,
 * multiples of three prints Fizz
 * and multiples of three and five print FizzBuzz
 * and multiples of five prints Buzz
 * Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && !(num % 3 == 0))
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");

		}
	}

	return (0);
}
