#include "main.h"
/**
 * append_text_to_file - Attaches a text at the end of a file.
 * @filename: points to the file name.
 * @text_content: This is string to append to the file end
 * Return: Incase the function fail or filename is null : -1.
 * Incase the file is not found the user looses write permissions :-1.
 * success - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

