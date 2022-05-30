#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - Print number of element in a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /** Number of nodes */

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);

}
