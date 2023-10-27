#include "main.h"
/**
<<<<<<< HEAD
 * print_rev - imprime en reversa
=======
 * print_rev - imprime in reversa
>>>>>>> 18bbd68f718ceb362f743c6f3de2e7b1488358f8
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
<<<<<<< HEAD
	int o;	
	while (*s != '\n')
=======
	int o;

	while (*s != '\0')
>>>>>>> 18bbd68f718ceb362f743c6f3de2e7b1488358f8
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
<<<<<<< HEAD
		s++;
	}
	_putchar('\n');
}
=======
		s--;
	}

	_putchar('\n');
}

>>>>>>> 18bbd68f718ceb362f743c6f3de2e7b1488358f8
