#include "lists.h"

/**
  * print_dlistint - Prints all the elements of a distint_t list.
  * @h: The head of the dlistint_t list.
  *
  * Return: The number of nodes in the list.
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
