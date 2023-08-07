#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int t;
	int lt;
	int rwr;

	if (!filename)
		return (-1);

	t = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (t == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lt = 0; text_content[lt]; lt++)
		;

	rwr = write(t, text_content, lt);

	if (rwr == -1)
		return (-1);

	close(t);

	return (1);
}
