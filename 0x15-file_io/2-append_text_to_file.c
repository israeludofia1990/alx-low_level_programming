#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byts_written, len = 0, i;

	if (filename == NULL)
		return (-1);
	i = 0;
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
	{
		len += 1;
		i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	byts_written = write(fd, text_content, len);
	if (byts_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
