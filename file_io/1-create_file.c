#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: On success: 1 (the file is created)
 * On failure: -1 (the file could not be created)
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
