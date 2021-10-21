/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:05 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:05:06 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunk_length(t_node *tmp, int chunk)
{
	int	len;

	len = 0;
	while (tmp)
	{
		if (tmp->chunk == chunk)
			len++;
		tmp = tmp->next;
	}
	return (len);
}
