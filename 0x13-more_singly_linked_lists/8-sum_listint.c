#include "lists.h"

/**
* sum_listint - computes  the sum of all the data (n) in a linked list.
* @head: pointer to the head of the linked list.
* Return: the sum of all data (n) in a linked list.
* or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
