#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 * @head: Points to the head of dlistint_t
 * @n: Data to be added at the beginning of the list.
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
