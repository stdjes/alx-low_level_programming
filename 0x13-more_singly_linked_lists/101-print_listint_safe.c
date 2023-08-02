#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 *
 * This function prints the linked list of type listint_t,
 * handling the case of a looped list to avoid infinite loops.
 * If the list is looped, it prints the nodes until the loop is detected,
 * and then prints the loop's starting node.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, index = 0;

	num_nodes = calc_loop_length(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < num_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
/**
 * calc_loop_length - Counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * This function is used internally by 'print_listint_safe' to determine
 * the number of unique nodes in a looped list. It uses Floyd's cycle-finding
 * algorithm (tortoise and hare) to detect the presence of a loop in the list
 * and calculates the number of nodes in the loop.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t calc_loop_length(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				nodes++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				nodes++;
				slow_ptr = slow_ptr->next;
			}

			return (nodes);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}
