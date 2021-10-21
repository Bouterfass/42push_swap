/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:08:03 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:08:04 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_chunk_a(t_heap *l, int med, int *gchunk, int maxchunk)
{
	t_node	*tmp;

	l->c = l->head;
	*gchunk = *gchunk + 1;
	tmp = l->head;
	if (chunk_length(tmp, maxchunk) == 1)
	{
		while (l->c)
		{
			if (l->c->chunk == maxchunk)
				l->c->chunk = *gchunk;
			l->c = l->c->next;
		}
	}
	tmp = l->head;
	if (chunk_length(tmp, maxchunk) > 1)
	{
		while (l->c)
		{
			if (l->c->value < med && l->c->chunk == maxchunk)
				l->c->chunk = *gchunk;
			l->c = l->c->next;
		}
	}
}

void	update_chunk_b(t_heap *l, int med, int *gchunk, int maxchunk)
{
	t_node	*tmp;

	l->c = l->head;
	tmp = l->head;
	*gchunk = *gchunk + 1;
	if (chunk_length(tmp, maxchunk) == 1)
	{
		while (l->c)
		{
			if (l->c->chunk == maxchunk)
				l->c->chunk = *gchunk;
			l->c = l->c->next;
		}
	}
	tmp = l->head;
	if (chunk_length(tmp, maxchunk) > 1)
	{
		while (l->c)
		{
			if (l->c->value >= med && l->c->chunk == maxchunk)
				l->c->chunk = *gchunk;
			l->c = l->c->next;
		}
	}
}
