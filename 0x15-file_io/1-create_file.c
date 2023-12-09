#include "main.h"
/**
 * create_file - create and write into the file
 * and copy content in it
 * @filename: the file to be created
 * @text_content: the content to be copied into the file
 * Return: 1 if successful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)

	rwr = write(file_d, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(file_d);

	return (1);
}
