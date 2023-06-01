#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * struct list_t - singly linked list
 * @h: pointer to struct list_t
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
