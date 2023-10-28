#include "main.h"
#include <stddef.h>

/**
* get_bit - prog returns the of a bit at a given index
* @n: number to check bits in
* @index: index at which to check bit
*
* Return: value of the bit, or -1 if there is an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
