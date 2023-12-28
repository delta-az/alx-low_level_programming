#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node if exists or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		idx++;
		if (idx - 1 == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
