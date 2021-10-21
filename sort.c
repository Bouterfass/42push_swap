/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:41 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:07:44 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_heap *l)
{
	int	max;

	l->c = l->head;
	max = 0;
	while (l->c)
	{
		if (l->c->value > max)
			max = l->c->value;
		l->c = l->c->next;
	}
	return (max);
}

void	best_move(t_heap *l)
{
	list_ra(l);
	list_sa(l, 1);
}

void	sort(t_heap *l)
{
	int		med;
	int		dis;
	t_node	*tmp;

	tmp = l->head;
	med = get_median(l, tmp, 1);
	dis = dist(l, med);
	if (is_rsorted(l) == 0)
		best_move(l);
	else
	{
		if (dis == 0)
			list_rra(l);
		if (dis == 2)
			list_ra(l);
		if (is_rsorted(l) == 0)
			best_move(l);
	}
}
