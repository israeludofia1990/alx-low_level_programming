#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stddef.h>
/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: content to write
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int new_file;
	mode_t perm = S_IRUSR | S_IWUSR;
	int byts_written;
	int len;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (new_file == -1)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
		len++;
	if (text_content == NULL)
		text_content = "";

	byts_written = write(new_file, text_content, len);
	if (byts_written == -1)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);
	return (1);
}
