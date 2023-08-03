#include <stddef.h>
#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set to 1.
 *
 * Description:
 * This function sets the bit at the given index 'index'
 * to 1 in the number 'n'.
 * The index ranges from 0 (least significant bit) to 63 (most significant bit)
 * for a 64-bit unsigned long int.
 *
 * Return: 1 for success,
 *	-1 for failure (if index is greater than 63 or n is NULL).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * Check if the index is valid (within the range of 0 to 63)
	 * and if the pointer n is not NULL
	 */
	if (index > ((sizeof(unsigned long int)) * 8) - 1 || n == NULL)
		return (-1);

	/**
	 * To set the bit at the given index to 1,
	 * we use a bitwise OR operation.
	 * We create a mask with the bit at the given index set to 1,
	 * and then perform a bitwise OR with the original number *n.
	 * This will set the corresponding bit to 1
	 * while leaving the other bits unchanged.
	 *
	 * 1UL is an unsigned long integer with only the least significant bit
	 * set to 1.
	 * To set a bit @ index 'index', we left-shift 1UL by 'index' positions
	 * to create a mask where only the bit at 'index' is set to 1.
	 * Then, we perform a bitwise OR operation with *n
	 * to set the bit at the specified index to 1.
	 */
	*n = ((1UL << index) | *n);

	return (1); /* Return 1 to indicate success */
}
