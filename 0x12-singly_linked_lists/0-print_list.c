#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node of list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	
	count = 0;
	if (h == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

