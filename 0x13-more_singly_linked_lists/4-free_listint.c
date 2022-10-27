#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node of the
 * listint_t to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
