#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @text_content: created file content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		n_written = write(f, text_content, strlen(text_content));
		if (n_written == -1)
			return (-1);
	}
	close(f);
	return (1);
}
