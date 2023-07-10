#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letters it should read and print
 * Return: number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byts_read, byts_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	byts_read = read(fd, buffer, letters);
	if (byts_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	byts_written = write(STDOUT_FILENO, buffer, byts_read);
	if (byts_read != byts_written)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (byts_written);
}
