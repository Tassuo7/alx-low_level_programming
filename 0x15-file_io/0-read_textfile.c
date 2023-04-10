#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: the filename.
 * @letters: number of letters it should read and print.
 *
 * Return: number of letters. If null or fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fii;
	ssize_t numlr, numlp;
	char *buff;

	if (!filename)
		return (0);

	fii = open(filename, O_RDONLY);

	if (fii == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	numlr = read(fii, buff, letters);
	numlp = write(STDOUT_FILENO, buff, numlr);

	close(fii);

	free(buff);

	return (numlp);
}
