#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - function Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         else - 1 and -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fdw, wagwan, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fdw = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wagwan = write(fdw, text_content, lent);

	if (fdw == -1 || wagwan == -1)
		return (-1);

	close(fdw);

	return (1);
}

