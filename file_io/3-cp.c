#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to copy content of one file to another
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[size];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (bytes_read = read(file_from, buffer, size) > 0)
		bytes_written = write(file_to, buffer, bytes_read);
	if (file_from == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1 || bytes_written != bytes_read)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close to fd &d\n", file_to);
		exit(100);
	}
	return (0);
}
