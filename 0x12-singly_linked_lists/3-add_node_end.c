#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - insert new node in end of Linked list
* @head: double pointer to the list_t
* @str: put the string in new node
* Return: new element address,  NULLat failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
