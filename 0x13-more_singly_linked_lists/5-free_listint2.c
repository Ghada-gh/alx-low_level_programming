#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer of listint_t struct
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
  listint_t *temp;

  while (*head)
    {
      temp = *head;
      *head = (*head)->next;
      free(temp);
    }
}
