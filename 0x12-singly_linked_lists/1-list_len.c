
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: returns number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
