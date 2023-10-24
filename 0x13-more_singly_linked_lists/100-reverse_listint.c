#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node of the linked list
 * Return: a pointer to the first node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
  listint_t *temp;
  listint_t *prev;

  if (*head == NULL || (*head)->next == NULL)
    {
      return (*head);
    }

  temp = *head;
  prev = NULL;

  while (temp != NULL)
    {
      listint_t *next = temp->next;

      temp->next = prev;
      prev = temp;
      temp = next;
    }

  *head = prev;
  return (*head);
}
