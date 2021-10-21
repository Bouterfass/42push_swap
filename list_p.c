/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:06:52 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:06:52 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_pa(t_heap *receiver, t_heap *sender)
{
	t_node	*tmp;

	if (!sender || !sender->head)
		return ;
	if (sender->length > 0)
	{
		tmp = sender->head;
		sender->head = tmp->next;
		sender->length--;
		if (!receiver->head)
		{
			tmp->next = NULL;
			receiver->head = tmp;
			receiver->tail = tmp;
		}
		else
		{
			tmp->next = receiver->head;
			receiver->head = tmp;
		}
		receiver->length++;
		write(1, "pa\n", 3);
	}
}

void	list_pb(t_heap *receiver, t_heap *sender)
{
	t_node	*tmp;

	if (!sender || !sender->head)
		return ;
	if (sender->length > 0)
	{
		tmp = sender->head;
		sender->head = tmp->next;
		sender->length--;
		if (!receiver->head)
		{
			tmp->next = NULL;
			receiver->head = tmp;
			receiver->tail = tmp;
		}
		else
		{
			tmp->next = receiver->head;
			receiver->head = tmp;
		}
		receiver->length++;
		write(1, "pb\n", 3);
	}
}
