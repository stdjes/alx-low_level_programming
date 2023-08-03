#include <stddef.h>
#include "main.h"

/**
 * clear_bit - Clears a bit at a given position.
 * @n: Pointer to the number to modify.
 * @index: Position of the bit to clear.
 *
 * Description:
 * This fxn clears the bit at the given index 'index' to 0 in the number 'n'.
 * The index ranges from 0 (least significant bit) to 63
 * for a 64-bit unsigned long int.
 *
 * Return: 1 for success,
 *         -1 for failure (if index is greater than the bit size or n is NULL).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	/* Create a mask with the bit at the given index set to 0 */
	/*and use bitwise AND to clear the bit */
	*n &= ~(1UL << index);

	return (1); /* Return 1 to indicate success */
}
