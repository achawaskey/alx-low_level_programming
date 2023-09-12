#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is return, and error is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
