#include "sort.h"
/**
 * swap -  function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @f: higher node
 * @s: lower node
 */
void swap(listint_t *f, listint_t *s)
{
	if (f->prev)
		f->prev->next = s;
	if (s->next)
		s->next->prev = f;
	f->next = s->next;
	s->prev = f->prev;
	f->prev = s;
	s->next = f;
}
/**
 * insertion_sort_list - insertion_sort_list
 * @list: l
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *f, *s;

	if (!(list && (*list) && (*list)->next))
		return;
	s = (*list)->next;
	while (s)
	{
		f = s;
		while (f->prev)
		{
			if (f->prev->n > f->n)
			{
				swap(f->prev, f);
				if (!f->prev)
					*list = f;
				print_list(*list);
			}
			else
				f = f->prev;
		}
		s = s->next;
	}
}
