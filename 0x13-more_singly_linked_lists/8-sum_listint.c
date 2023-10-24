#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: Sum of all data (n) in the linked list, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
  int sum = 0;

  while (head)
    {
      sum += head->n;
      head = head->next;
    }
  return (sum);
}
