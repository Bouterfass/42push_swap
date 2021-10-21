/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:22 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:07:23 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_chunk(t_heap *l)
{
	int	max;

	max = 0;
	l->c = l->head;
	if (!l->c || !l || l->length == 0)
		return (-1);
	if (l->length == 1)
		return (l->head->chunk);
	while (l->c)
	{
		if (l->c->chunk > max)
			max = l->c->chunk;
		l->c = l->c->next;
	}
	return (max);
}
