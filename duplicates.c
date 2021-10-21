/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:19 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 17:05:36 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicates(t_heap *l)
{
	t_node	*tmp;
	int		count;

	count = 0;
	tmp = l->head;
	if (l->length == 1)
		return (0);
	while (tmp)
	{
		l->c = l->head;
		while (l->c)
		{
			if (l->c->value == tmp->value)
				count++;
			l->c = l->c->next;
		}
		if (count > 1)
			return (1);
		count = 0;
		tmp = tmp->next;
	}
	return (0);
}
