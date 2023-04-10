#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int byts_read;
	char buffer[1024];
/**	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; */

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "can't write to file %s\n", argv[2]), exit(99);
	while ((byts_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(file_to, buffer, byts_read) != byts_read)
			dprintf(STDERR_FILENO, "can't write to file %s\n", argv[2]), exit(99);
	}
		if (byts_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (close(file_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
		if (close(file_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
		return (0);
}
