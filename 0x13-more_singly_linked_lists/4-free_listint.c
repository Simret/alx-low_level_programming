#include "lists.h"
#include <stdlib.h>

/**
 *fee_listint - Frees a list.
 *@head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)

{
	listint_t *t1 *t2;

	t1= head;
	while (t1!= NULL)
	{
		t2 = t1->next;
		free(t1);
		t1 = t2;
	}
}
