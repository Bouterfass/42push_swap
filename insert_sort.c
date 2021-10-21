/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:30:22 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:31:49 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_cheap(t_ps *ps, int close, int far)
{
	size_t	dc;
	size_t	df;

	if (close == far)
		return (close);
	dc = dist(ps->la, close);
	df = dist(ps->la, far);
	if (dc < (ps->la->length - df))
		return (close);
	if (dc > (ps->la->length - df))
		return (far);
	if (dc == (ps->la->length - df))
		return (close);
	return (0);
}

int	get_close(t_ps *ps, int chunk)
{
	t_node	*tmp;

	tmp = ps->la->head;
	while (tmp && tmp->chunk != chunk)
		tmp = tmp->next;
	return (tmp->value);
}

int	get_far(t_ps *ps, int chunk)
{
	t_node	*tmp;
	int		val;

	tmp = ps->la->head;
	while (tmp)
	{
		if (tmp->chunk == chunk)
			val = tmp->value;
		tmp = tmp->next;
	}
	return (val);
}

void	push_to_b(t_ps *ps)
{
	int	minchunk;
	int	close;
	int	far;
	int	cheap;

	while (ps->la->length > 0)
	{
		minchunk = min_chunk(ps->la);
		close = get_close(ps, minchunk);
		far = get_far(ps, minchunk);
		cheap = get_cheap(ps, close, far);
		push_cheap(ps, cheap);
	}
}

void	insert_sort(t_ps *ps)
{
	push_to_b(ps);
	push_to_a(ps);
	free_all(ps);
}
