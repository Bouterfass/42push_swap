/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:03:55 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 14:46:27 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_append(t_heap *list, int val)
{
	t_node	*n;

	n = (t_node *)malloc(sizeof(t_node));
	if (!n)
		return ;
	n->value = val;
	n->chunk = 1;
	n->next = NULL;
	if (list->tail == NULL)
	{
		list->head = n;
		list->tail = n;
	}
	else
	{
		list->tail->next = n;
		list->tail = n;
	}
	list->length++;
}
