#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads the text file print to STDOUT_Fileno
 * @filename: This is the text file to be read
 * @letters: ALL the numbers of letters to be read through
 * Return: w- Show actual no. of bytes being read and all printed
 * 0 when function fais or filename is null
 * end
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

