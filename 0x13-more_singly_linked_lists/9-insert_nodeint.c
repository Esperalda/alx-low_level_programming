#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
* listint_len -  should return the number of elements in a linked listint_t list
* @h: head pointer of singly linked list
*
* Return: Number of elements in list
*/
size_t listint_len(const listint_t *h)
{
int count = 0;
while (h != 0)
h = h->next, count += 1;
return (count);
}
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to head of singly linked list
* @idx: index of the list where the new node should be added, starts at 0
* @n: value that the node will have
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int len = listint_len(*head), count = 0;
listint_t *ptr, *lst, *lstst;
if (head == 0 && idx > 0)
return (0);
ptr = malloc(sizeof(listint_t));
if (ptr == 0)
return (0);
if (head == 0 && idx == 0)
{
ptr->n = n, ptr->next = 0, *head = ptr;
return (ptr);
}
if (idx > len)
{
free(ptr);
return (0);
}
lst = *head;
ptr->n = n;
while (count < idx && idx != 0)
{
lstst = lst, lst = lst->next;
count++;
}
if (idx == 0)
{
*head = ptr;
ptr->next = lst;
}
else
{
lstst->next = ptr;
ptr->next = lst;
}
return (ptr);
}
