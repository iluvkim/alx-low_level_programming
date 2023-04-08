#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		int bytes_written = 0;

		do {
			int result = write(fd, text_content + bytes_written, strlen(text_content) - bytes_written);

			if (result == -1)
			{
				close(fd);
				return (-1);
			}
			bytes_written += result;
		} while (bytes_written < strlen(text_content));
	}
	close(fd);
	return (1);
}
