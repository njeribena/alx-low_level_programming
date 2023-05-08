#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - file being created.
 * @filename: pointer pointing to the file to being created.
 * @text_content: pointer pointing to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
