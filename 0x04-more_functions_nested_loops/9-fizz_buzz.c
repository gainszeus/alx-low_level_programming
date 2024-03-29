#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiple of 3, Buzz for multiples of 5,
 * and FuzzBuzz for both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuss");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
