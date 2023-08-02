#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 *
 * This function traverses a linked list of type listint_t starting from the
 * head and accumulates the data value of each node to calculate the total sum.
 *
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data values in the list.
 */
int sum_listint(listint_t *head)
{
	int list_sum = 0; /* Variable to store the sum */
	listint_t *node_tr = head; /* Pointer to traverse the list */

	while (node_tr)
	{
		/* accumulate/sum up the data value of the current node */
		list_sum = list_sum + node_tr->n;
		node_tr = node_tr->next; /* Move to the next node */
	}

	return (list_sum);
}
