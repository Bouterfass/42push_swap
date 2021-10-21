/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:04:29 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:04:31 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_heap *list)
{
	list->c = list->head;
	if (!list->c || list->length == 0 || !list)
		return (1);
	else
	{
		list->c = list->head;
		while (list->c->next)
		{
			if (list->c->value > list->c->next->value)
				return (1);
			list->c = list->c->next;
		}
	}
	return (0);
}

int	is_rsorted(t_heap *list)
{
	list->c = list->head;
	list->c = list->head;
	while (list->c->next)
	{
		if (list->c->value < list->c->next->value)
			return (1);
		list->c = list->c->next;
	}
	return (0);
}
