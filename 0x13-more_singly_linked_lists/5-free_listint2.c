#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - should free up memory of a list
* @head: pointer to head of singly linked list
*
* Return: No Return
*/
void free_listint2(listint_t **head)
{
listint_t *lst;

if (head)
{
while (*head != NULL)
{
lst = *head;
*head = lst->link;
free(lst);
}
}

}
