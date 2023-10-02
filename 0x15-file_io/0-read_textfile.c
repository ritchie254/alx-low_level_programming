#include "main.h"

/**
  * read_textfile -  a function that reads a text file
  *and prints it to the POSIX standard output
  *@filename: name of the file
  *@letters: size of buffer
  *
  *Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	bytes_read = read(fp, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (bytes_written);
}
