/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:24:42 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:25:40 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_m(t_ps *ps)
{
	t_node			*tmp;
	long long int	max;

	max = -2147483649;
	tmp = ps->lb->head;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

void	push_max(t_ps *ps, int max)
{
	size_t	distc;

	distc = dist(ps->lb, max);
	if (distc <= (ps->lb->length / 2))
		lift_up_b(ps, distc);
	else
		lift_down_b(ps, ps->lb->length - distc);
}

void	push_to_a(t_ps *ps)
{
	int	max;

	while (ps->lb->length > 0)
	{
		if (ps->lb->length == 1)
			list_pa(ps->la, ps->lb);
		else
		{
			max = get_m(ps);
			push_max(ps, max);
		}
	}
}
