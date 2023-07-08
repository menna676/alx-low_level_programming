#include "shell.h"
/**
* getlist_leng - sets  leng. of list
* @head: first node pointer
* Return: list size
*/
size_t getlist_leng(const list_t *head)
{
size_t i = 0;
while (head)
{
head = head->next;
i++;
}
return (i);
}
