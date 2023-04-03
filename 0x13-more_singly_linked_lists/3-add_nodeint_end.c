#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node to a singly linked list at the end of it
* @head: pointer to head of the singly linked list_t
* @n: number to add to the new node
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lst;
listint_t *ptr = malloc(sizeof(listint_t));

if (ptr == 0)
return (0);

lst = *head;

ptr->n = n;
ptr->next = 0;

if (lst == 0)
{
*head = ptr;
}
else
{
while (lst->next != 0)
lst = lst->next;
lst->next = ptr;
}

return (ptr);
}
