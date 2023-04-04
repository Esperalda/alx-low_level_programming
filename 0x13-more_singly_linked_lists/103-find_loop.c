#include "lists.h"
#include <stdio.h>
/**
* find_listint_loop - finds address of starting node in looped linked list
* @head: pointer to the head in linked list to test
*
* Return: The address of the node where the loop starts,
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *male, *female;

if (!head)
return (NULL);

male = female = head;

while (female && male && male->next)
{
female = female->next;
male = (male->next)->next;

if (male == female)
{
female = head;

while (female && male)
{
if (female == male)
return (female);

female = female->next;
male = male->next;
}
}
}

return (NULL);
}
