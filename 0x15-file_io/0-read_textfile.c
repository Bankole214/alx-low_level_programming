#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdw;
	ssize_t wagwan;
	ssize_t t;

	fdw = open(filename, O_RDONLY);
	if (fdw == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fdw, buffer, letters);
	wagwan = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fdw);
	return (wagwan);
}

