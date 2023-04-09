#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len;
	int new_file;
	int byts_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
	{
		return (-1);
	}
	len = 0;
	while (text_content[len] != '\0')
		len++;

	byts_written = write(new_file, text_content, len);
	if (byts_written == -1 || byts_written != len)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);
	return (1);
}
