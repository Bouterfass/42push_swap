/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:36:25 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:36:49 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_heap *a, int swapped)
{
	t_node	*ptr1;
	t_node	*lptr;
	int		tmp;

	lptr = NULL;
	if (a->head == NULL)
		return ;
	while (swapped)
	{
		swapped = 0;
		ptr1 = a->head;
		while (ptr1->next != lptr)
		{
			if (ptr1->value > ptr1->next->value)
			{
				tmp = ptr1->value;
				ptr1->value = ptr1->next->value;
				ptr1->next->value = tmp;
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	}
}
