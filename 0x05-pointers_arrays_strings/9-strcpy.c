#include "main.h"

/**
 * *_strcpy - a function that copies the string printed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	}

	while (src[z] != '\0');

	return (dest);
}
