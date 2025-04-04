#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *append_text_to_file - appends text at the end of file
 *@filename: name of the file
 *@text_content: NULL terminated string to add at end of file
 *Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
