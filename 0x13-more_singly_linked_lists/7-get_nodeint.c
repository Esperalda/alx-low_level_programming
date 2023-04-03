#include "lists.h"

/**
* get_nodeint_at_index -  retrieves the nth node of a listint_t linked list
* @head: head pointer of singly linked list
* @index: is the index to find in list
*
* Return: nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int count = 0;

if (head == NULL)
return (0);

while (count < index)
{
if (head == NULL)
return (0);
head = head->next;
count += 1;
}
return (head);
}
