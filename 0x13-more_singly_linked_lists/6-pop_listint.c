#include "lists.h"

/**
* pop_listint - deletes the head node.
* @head: pointer to the head of the linked list.
* Return: head of the node's data (n) or 0.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
