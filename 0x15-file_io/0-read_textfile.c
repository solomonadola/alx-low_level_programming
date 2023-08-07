#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed.
 * or if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int t;
	ssize_t tt, tp;
	char *buf;

	if (!filename)
		return (0);

	t = open(filename, O_RDONLY);

	if (t == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	tt = read(t, buf, letters);
	tp = write(STDOUT_FILENO, buf, tt);

	close(t);

	free(buf);

	return (tp);
}
