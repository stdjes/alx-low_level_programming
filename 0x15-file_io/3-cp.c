#include "main.h"
#include "check-file_IO_status.c"

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Arguments passed.
 *
 * Return: 0 on success, non-zero exit code on failure.
 */
int main(int argc, char *argv[])
{
	int src, dest, read_f = 1024, write_f, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open the source file for reading */
	src = open(argv[1], O_RDONLY);
	check_file_status(src, -1, argv[1], 'O');

	/* Open the destination file for writing */
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_file_status(dest, -1, argv[2], 'W');

	/* Read from source and write to destination */
	while (read_f == 1024)
	{
		read_f = read(src, buffer, sizeof(buffer));
		if (read_f == -1)
			check_file_status(-1, -1, argv[1], 'O');

		write_f = write(dest, buffer, read_f);
		if (write_f == -1)
			check_file_status(-1, -1, argv[2], 'W');
	}

	/* Close source and destination files */
	close_src = close(src);
	check_file_status(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_file_status(close_dest, dest, NULL, 'C');

	return (0);
}
