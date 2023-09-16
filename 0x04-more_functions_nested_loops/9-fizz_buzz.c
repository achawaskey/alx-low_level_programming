#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * description: print the numbers 1 - 100 u/
 * fizz for multiplies of 3, Buzz for multiplier of 5,
 * and fizzbuzz for multplies of both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
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
