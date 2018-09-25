#include "stack.h"

/**
 *pop - removes the top of the stack
 *@head: the head of the stack
 *Return: void
 */

void pop(stack_t **head, int line)
{
	stack_t *current = NULL;

	if (*head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
		return;
	}
	current = *head;
	if (current->next == NULL)
	{
		free(current);
		*head = NULL;
	}
	else
	{
		*head = current->next;
		free(current);
		(*head)->prev = NULL;
	}

}