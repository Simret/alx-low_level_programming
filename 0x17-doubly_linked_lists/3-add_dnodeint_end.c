#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of  the list
 * @head: double ptr to the head of the list
 * @n: data
 * Return: address to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *newNode, *oldNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	oldNode = *head;
	for (; oldNode->next != NULL;)
	{													oldNode = oldNode->next;
	}
	oldNode->next = newNode;
	newNode->prev = oldNode;
	return (newNode);
}
