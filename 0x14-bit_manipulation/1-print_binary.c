#include "main.h"

/**
 * _pow - Calculate the pwoer of a number
 * @base: base of the exponent
 * @exponent: The exponent
 *
 * Retrun: The result of base raised to the power of exponent.
 */
double _pow(double base, int exponent)
{
	double num;
	int a;

	num = 1;
	for (a = 1; a <= exponent; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
