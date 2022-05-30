#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - Print all elements of a list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0; /** Number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}

	return (n);

}
