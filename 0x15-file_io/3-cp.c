#include "main.h"
#include <stdio.h>
/**
 * check_to_stat - funct checks if a file can be opened or closed
 * @stat: file descriptor of fileto be opened
 * @filename: name of file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_to_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}

	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read to %s\n", filename);
		exit(98);
	}
	else if (mode == 'w' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copy content of a file from one to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int dest, a_read = 1024, wrote, close_argc, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	argc = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_to_stat(dest, -1, argv[2], 'w');
	while (a_read == 1024)
	{
		a_read = read(argc, buffer, sizeof(buffer));
		if (a_read == -1)
			check_to_stat(-1, -1, argv[1], '0');
		wrote = write(dest, buffer, a_read);
		if (wrote == -1)
			check_to_stat(-1, -1, argv[2], 'w');
	}
	close_argc = close(argc);
	check_to_stat(close_argc, argc, NULL, 'c');
	close_dest = close(dest);
	check_to_stat(close_dest, dest, NULL, 'c');
	return (0);
}
