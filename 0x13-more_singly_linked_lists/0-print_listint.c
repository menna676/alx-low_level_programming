#include "lists.h"
/**
* print_listint - print elements of the list
* @h: list type listint_t to print
* Return: num of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
