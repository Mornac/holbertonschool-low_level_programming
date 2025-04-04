#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

#define BUFFER_SIZE 1024
/**
 *main - copies the content of a file to another file
 *Return: exit errors
 */
int main(int argc, char *argv[])
{
	int fptr1, fptr2;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fptr1 = open(argv[1], O_RDONLY);
	if (fptr1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fptr2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fptr2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read  = read(fptr1, buffer, BUFFER_SIZE)) > 0)
	{
		write(fptr2, buffer, bytes_read);
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fptr1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr1);
		exit(100);
	}

	if (close(fptr2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr2);
		exit(100);
	}
	return (0);
}
