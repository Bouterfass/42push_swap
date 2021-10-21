/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:06:57 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:06:58 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_ra(t_heap *l)
{
	t_node	*tmp;

	if (!l)
		return ;
	if (l->length == 2)
		list_sa(l, 0);
	else
	{
		tmp = l->head;
		l->head = l->head->next;
		tmp->next = NULL;
		l->tail->next = tmp;
		l->tail = tmp;
	}
	write(1, "ra\n", 3);
}

void	list_rb(t_heap *l)
{
	t_node	*tmp;

	if (!l)
		return ;
	if (l->length == 2)
		list_sb(l, 0);
	else
	{
		tmp = l->head;
		l->head = l->head->next;
		tmp->next = NULL;
		l->tail->next = tmp;
		l->tail = tmp;
	}
	write(1, "rb\n", 3);
}

void	list_rra(t_heap *l)
{
	t_node	*tmp;

	if (!l)
		return ;
	tmp = l->head;
	if (l->length == 2)
		list_sa(l, 0);
	else
	{
		while (tmp->next != l->tail)
			tmp = tmp->next;
		tmp->next->next = l->head;
		l->head = tmp->next;
		tmp->next = NULL;
		l->tail = tmp;
	}
	write(1, "rra\n", 4);
}

void	list_rrb(t_heap *l)
{
	t_node	*tmp;

	if (!l)
		return ;
	tmp = l->head;
	if (l->length == 2)
		list_sb(l, 0);
	else
	{
		while (tmp->next != l->tail)
			tmp = tmp->next;
		tmp->next->next = l->head;
		l->head = tmp->next;
		tmp->next = NULL;
		l->tail = tmp;
	}
	write(1, "rrb\n", 4);
}
