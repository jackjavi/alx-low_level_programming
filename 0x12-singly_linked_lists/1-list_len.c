#include "lists.h"

/**
 * list_len - returns the num of elements in a linked list_t list
* @h: pointer to the first node in a list
*
* Return: number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
