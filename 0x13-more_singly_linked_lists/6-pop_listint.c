#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pops the head node off of a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The value of the popped node's data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
  listint_t *temp;
  int n;

  if (*head == NULL)
    return (0);

  temp = *head;
  n = temp->n;
  *head = temp->next;
  free(temp);
  
  return (n);
}
