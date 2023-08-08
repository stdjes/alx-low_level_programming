#include "main.h"

/**
 * check_file_status - Check if a file can be processed and handle errors.
 * @stat: Status of the file operation (result of open/close/read/write).
 * @fd: File descriptor associated with the operation (-1 if not applicable).
 * @filename: Name of the file being operated on.
 * @mode: Operation mode ('O' for open, 'C' for close, 'W' for write).
 *
 * This function checks the status of a file operation and takes appropriate
 * action based on the mode and result of the operation. If the operation
 * fails and the mode is 'C', it prints an error message & exits with code 100
 * If the operation fails and the mode is 'O', it prints an error message and
 * exits with code 98. If the operation fails and the mode is 'W', it prints
 * an error message and exits with code 99.
 */
void check_file_status(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
