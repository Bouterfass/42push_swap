/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:26 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:07:29 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lift_up_b(t_ps *ps, int it)
{
	loop_on_r(list_rb, ps->lb, it);
	list_pa(ps->la, ps->lb);
}

void	lift_down_b(t_ps *ps, int it)
{
	loop_on_r(list_rrb, ps->lb, it);
	list_pa(ps->la, ps->lb);
}

int	move_to_a(t_ps *ps, int chunk)
{
	int		count;
	t_node	*tmp;

	tmp = ps->lb->head;
	while (tmp != NULL)
	{
		if (tmp->chunk == chunk)
		{
			count = dist(ps->lb, tmp->value);
			if ((size_t)count <= ps->lb->length / 2)
				lift_up_b(ps, count);
			else
				lift_down_b(ps, ps->lb->length - count);
			tmp = ps->lb->head;
		}
		else
			tmp = tmp->next;
	}
	free(tmp);
	return (0);
}
