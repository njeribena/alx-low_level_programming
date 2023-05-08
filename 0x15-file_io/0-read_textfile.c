#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads the text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t z;
	ssize_t j;
	ssize_t i;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(i, buf, letters);
	j = write(STDOUT_FILENO, buf, z);
	free(buf);
	close(i);
	return (y);
}
