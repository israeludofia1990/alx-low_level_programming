#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copys file from source to destination
 * @ac: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int ac, char **argv)
{
	int src, dest, byts_rd, byts_wr;
	char buffer[1024];
	char *from, *to;
	/**mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;*/

	from = argv[1];
	to = argv[2];
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(from, O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	dest = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to), exit(99);
	while ((byts_rd = read(src, buffer, 1024)) > 0)
	{
		if (byts_rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
		byts_wr = write(dest, buffer, byts_rd);
		if (byts_wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to), exit(99);
	}
	if (close(src) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
