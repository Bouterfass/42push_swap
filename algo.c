/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:34:23 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 16:45:07 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	upgrade_chunk(t_heap *la, int val, int gchunk)
{
	t_node	*tmp;

	tmp = la->head;
	while (tmp && tmp->value != val)
		tmp = tmp->next;
	tmp->chunk = gchunk;
}

void	set_chunks(t_heap *la, t_heap *sorted)
{
	int		i;
	int		gchunk;
	t_node	*tmp;
	int		len;

	gchunk = 1;
	i = 1;
	if (la->length < 100)
		len = la->length / 4;
	else
		len = la->length / ((la->length / 50) * 2) + 3;
	tmp = sorted->head;
	while (tmp)
	{
		upgrade_chunk(la, tmp->value, gchunk);
		if (i == len + 1)
		{
			i = 0;
			gchunk++;
		}
		i++;
		tmp = tmp->next;
	}
}

void	algo(t_ps *ps, t_node *n)
{
	t_heap	*sorted;

	if (is_sorted(ps->la) == 1)
	{
		if (ps->la->length < 50)
			quick_sort(ps, n);
		else
		{
			sorted = copy_list(ps->la);
			bubble_sort(sorted, 1);
			set_chunks(ps->la, sorted);
			free_heap(sorted);
			insert_sort(ps);
		}
	}
	else
		free_all(ps);
}
