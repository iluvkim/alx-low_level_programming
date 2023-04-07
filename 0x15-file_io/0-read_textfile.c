#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	ssize_t total_read = 0;

	do {
		char buffer[1024];
		ssize_t num_read = read(fd, buffer, sizeof(buffer));

		if (num_read == -1)
		{
			close(fd);
			return (0);
		}
		ssize_t num_written = write(STDOUT_FILENO, buffer, num_read);

		if (num_written == -1 || num_written != num_read)
		{
			close(fd);

			return (0);
		}
		total_read += num_read;
	} while (total_read < letters);
	close(fd);

	return (total_read);
}
