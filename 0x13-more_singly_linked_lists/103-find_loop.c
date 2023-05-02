#include "lists.h"

/**
* find_listint_loop - finds the loop within a linkked list.
* @head: pointer to the head of the linked list.
* Return: pointer to the node where the the loop begins
*	or NULL if there is no loop.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fstnode, *scndnode;

	if (head == NULL || head->next == NULL)
	return (NULL);

	fstnode = head->next;
	scndnode = (head->next)->next;

	while (scndnode)
	{
		if (fstnode == scndnode)
		{
			fstnode = head;

			while (fstnode != scndnode)
			{
				fstnode = fstnode->next;
				scndnode = scndnode->next;
			}

			return (fstnode);
		}

		fstnode = fstnode->next;
		scndnode = (scndnode->next)->next;

	}

	return (NULL);
}
