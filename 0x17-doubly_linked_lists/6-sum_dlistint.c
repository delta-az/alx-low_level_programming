#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n) of a list.
 * @head: the head of the list
 *
 * Return: the sum of all data (n) of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
