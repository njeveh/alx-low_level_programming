#include "lists.h"

/**
  * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
  * list.
  * @head: The head pointer of the linked ist
  *
  * Return: The sum of all the data or 0 if the list is empty;
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
