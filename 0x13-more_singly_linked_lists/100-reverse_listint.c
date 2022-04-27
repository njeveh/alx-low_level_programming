#include "lists.h"

/**
  * reverse_listint - Reverses a linked list
  * @head: Start of the list
  *
  * Return: pointer to first node
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_temp = NULL;
	listint_t *next_temp = NULL;

	while (head != NULL)
	{
		next_temp = head->next;
		head->next = prev_temp;
		prev_temp = head;
		head = next_temp;
	}
	head = prev_temp;
	return (head);
}
