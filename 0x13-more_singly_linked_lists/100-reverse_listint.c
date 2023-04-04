#include "lists.h"
#include <stddef.h>

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to head of singly linked list
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *can, *cab;

if (*head == 0)
return (0);

if ((*head)->next == 0)
return (*head);

can = *head;
cab = can->next;
can->next = 0;
while (1)
{
if (cab->next == 0)
{
cab->next = *head;
*head = cab;
break;
}
can = cab;
cab = can->next;
can->next = *head;
*head = can;
}

return (*head);
}
