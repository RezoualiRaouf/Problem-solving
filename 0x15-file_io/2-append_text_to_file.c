#include "main.h"
/**
 * _sizeof - Computes the length of a string.
 * @text: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _sizeof(char *text)
{
int i = 0;

while (text[i] != '\0')
	i++;
return (i);
}
/**
 * append_text_to_file - Creates a file and writes text content to it.
 * @filename: The name of the file to append.
 * @text_content: The content to write to the file.
 *
 * Return: On success, return 1. On failure, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int pt, bwrite;

	if (filename == NULL)
		return (-1);
	pt = open(filename, O_WRONLY | O_APPEND);
	if (pt == -1)
		return (-1);
	if (text_content != NULL)
	{
		bwrite = write(pt, text_content, _sizeof(text_content));
		if (bwrite == -1)
		{
			close(pt);
			return (-1);
		}
	}
	close(pt);
return (1);
}
