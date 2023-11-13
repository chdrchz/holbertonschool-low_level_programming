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
	int op, length;
	length = 0;
	
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			_putchar(text_content[length]);
			length++;
	}
	
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	close(op);
	return (1);
}
