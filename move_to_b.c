/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:32 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:07:32 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lift_up_a(t_ps *ps, int it)
{
	loop_on_r(list_ra, ps->la, it);
	list_pb(ps->lb, ps->la);
}

void	lift_down_a(t_ps *ps, int it)
{
	loop_on_r(list_rra, ps->la, it);
	list_pb(ps->lb, ps->la);
}

int	move_to_b(t_ps *ps, int chunk)
{
	int		count;
	t_node	*tmp;

	tmp = ps->la->head;
	while (tmp != NULL)
	{
		if (tmp->chunk == chunk)
		{
			count = dist(ps->la, tmp->value);
			if ((size_t)count <= ps->la->length / 2)
				lift_up_a(ps, count);
			else
				lift_down_a(ps, ps->la->length - count);
			tmp = ps->la->head;
		}
		else
			tmp = tmp->next;
	}
	return (0);
}
