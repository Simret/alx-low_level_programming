#include "lists.h"

/**
 * add_dnodeint - add node at beginning of the list
 * @head: double ptr to the head of the list
 * @n:data
 * Return: new pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *newNode;
	
	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	
	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode; 
	return (newNode);
}
