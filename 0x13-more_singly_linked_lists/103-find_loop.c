#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 *
 * This function searches for a loop in the linked list of type listint_t
 * using the Floyd's cycle-finding algorithm (tortoise and hare).
 * If a loop is found, it returns the address of the node where
 * the loop starts; otherwise, it returns NULL.
 *
 * @head: Pointer to the head of the linked list to search for a loop.
 *
 * Return: Address of the node where the loop starts,
 * or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head; /* Slow pointer */
	listint_t *hare = head;     /* Fast pointer */

	if (!head)/*If the list is empty, there is no loop, return NULL.*/
		return (NULL);

	while (tortoise && hare && hare->next)
	{
		/*Move the fast pointer two steps at a time*/
		hare = hare->next->next;
		/*Move the slow pointer one step at a time*/
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			/* If the fast pointer and slow pointer meet,*/
			/* there is a loop in the list */
			/* Move the slow pointer back to the head */
			tortoise = head;
			while (tortoise != hare)
			{
				/*Move both pointers one step at a time*/
				/*till they meet again*/
				tortoise = tortoise->next;
				hare = hare->next;
			}
		/*Return the address of the node where the loop starts*/
			return (hare);
		}
	}

	return (NULL); /* If no loop is found, return NULL. */
}
