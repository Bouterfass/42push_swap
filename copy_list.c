/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:32:03 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:33:46 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_heap	*new_list(void)
{
	t_heap	*new;

	new = malloc(sizeof(t_heap));
	if (!new)
		return (NULL);
	new->head = NULL;
	new->tail = NULL;
	new->length = 0;
	return (new);
}

t_heap	*copy_list(t_heap *a)
{
	t_node	*tmp;
	t_heap	*res;

	res = new_list();
	tmp = a->head;
	while (tmp)
	{
		list_append(res, tmp->value);
		tmp = tmp->next;
	}
	return (res);
}
