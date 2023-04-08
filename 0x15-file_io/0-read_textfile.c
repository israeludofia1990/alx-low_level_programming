#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: name of file to be read
 * @letters:  number of letters it should read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil_e;
	char *space;
	int byts_read;
	ssize_t byts_written;

	if (filename == NULL)
		return (0);

	fil_e = open(filename, O_RDONLY);
	if (fil_e == -1)
		return (0);

	space = malloc(letters + 1);
	if (space == NULL)
	{
		close(fil_e);
		return (0);
	}
	byts_read = read(fil_e, space, letters);
	if (byts_read == -1)
	{
		close(fil_e);
		free(space);
		return (0);
	}
	space[byts_read] = '\0';

	byts_written = write(STDOUT_FILENO, space, byts_read);
	if (byts_written == -1 || byts_written != byts_read)
	{
		close(fil_e);
		free(space);
		return (0);
	}
	close(fil_e);
	free(space);
	return (byts_written);
}
