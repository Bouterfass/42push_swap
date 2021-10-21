/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:04:45 by youcef            #+#    #+#             */
/*   Updated: 2021/10/19 15:26:50 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_b(t_ps *ps, t_node *tmp, int *gchunk)
{
	int	med;

	med = get_median(ps->la, tmp, max_chunk(ps->la));
	update_chunk_a(ps->la, med, *(&gchunk), max_chunk(ps->la));
	move_to_b(ps, max_chunk(ps->la));
}

void	fill_a(t_ps *ps, t_node *tmp, int *gchunk)
{
	int	med;

	med = get_median(ps->lb, tmp, max_chunk(ps->lb));
	update_chunk_b(ps->lb, med, *(&gchunk), max_chunk(ps->lb));
	move_to_a(ps, max_chunk(ps->lb));
}

void	quick_sort(t_ps *ps, t_node *tmp)
{
	int	gchunk;

	gchunk = 1;
	if (ps->la->length == 3 && is_sorted(ps->la) == 1)
		sort(ps->la);
	else
	{
		while (is_sorted(ps->la) || ps->lb->length > 0)
		{
			while (ps->la->length > 2)
			{
				tmp = ps->la->head;
				fill_b(ps, tmp, &gchunk);
			}
			if (ps->la->head->value > ps->la->tail->value)
				list_sa(ps->la, 1);
			while (ps->lb->length > 0)
			{
				tmp = ps->lb->head;
				fill_a(ps, tmp, &gchunk);
			}
		}
	}
	free_all(ps);
}
