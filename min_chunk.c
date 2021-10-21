/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:27:39 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:28:09 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_chunk(t_heap *l)
{
	int		min;
	t_node	*tmp;

	tmp = l->head;
	min = max_chunk(l);
	while (tmp)
	{
		if (tmp->chunk < min)
		{
			min = tmp->chunk;
		}
		tmp = tmp->next;
	}
	return (min);
}
