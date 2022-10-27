#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list.
 * @head: pointer to the pointer to the first node of
 * listint_t list.
 * @n: integer struct member.
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (*head);
}
