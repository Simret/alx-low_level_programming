#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)

{
	const listint_t *t;
	unsigned int i = 0;

	t = h;
	while (t)
	{
		i++;
		t = t->next;
	}
	rturn (i);
}
