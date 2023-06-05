#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *abi, *ife;

	abi = ife = head;
	while (abi && ife && ife->next)
	{
		abi = abi->next;
		ife = ife->next->next;
		if (abi == ife)
		{
			abi = head;
			break;
		}
	}
	if (!abi || !ife || !ife->next)
		return (NULL);
	while (abi != ife)
	{
		abi = abi->next;
		ife = ife->next;
	}
	return (ife);
}
