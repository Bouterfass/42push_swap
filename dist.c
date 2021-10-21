/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:10 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:05:11 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dist(t_heap *l, int value)
{
	int	dist;

	dist = 0;
	l->c = l->head;
	if (l->head->value == value)
		return (0);
	while (l->c->value != value)
	{
		l->c = l->c->next;
		dist++;
	}
	return (dist);
}
