#include "lists.h"

/**
 * checked_cycle - checks if a singly linked list has a cycle
 * @list: Linked lists to check
 *
 * Return: 0 if it doesn't have a cycle, 1 if it does
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while  (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
