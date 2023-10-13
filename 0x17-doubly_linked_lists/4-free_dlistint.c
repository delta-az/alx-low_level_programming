#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the head of the list
 *
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = head;

	while (head)
	{
		head = head->next;
		free(prev);
		prev = head;
	}
}
