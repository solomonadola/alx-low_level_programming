#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file.
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. 
 * -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t;
	int lt;
	int rwr;

	if (!filename)
		return (-1);

	t = open(filename, O_WRONLY | O_APPEND);

	if (t == -1)
		return (-1);

	if (text_content)
	{
		for (lt = 0; text_content[lt]; lt++);

		rwr = write(t, text_content, lt);

		if (rwr == -1)
			return (-1);
	}

	close(t);

	return (1);
}
