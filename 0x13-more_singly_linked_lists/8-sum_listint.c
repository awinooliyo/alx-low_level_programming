#include "lists.h"
#include <stdio.h>
/**
* sum_listint - calculates the sum of all the data (n) in a linked list.
* @head: pointer to the head of the linked list.
* Return: the sum of all data (n) in a linked li
st
* or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
