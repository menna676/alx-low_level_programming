#include "lists.h"
/**
* add_nodeint - add new node in the beginning of linked list
* @head: pointer to the first node in linked list
* @n: data to add in the new node
* Return: pointer to new node, or NULL when it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
