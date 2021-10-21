/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:00 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 14:47:38 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_sa(t_heap *list, int p)
{
	int	tmp;

	if (list != NULL && list->length >= 2)
	{
		tmp = list->head->value;
		list->head->value = list->head->next->value;
		list->head->next->value = tmp;
		tmp = list->head->chunk;
		list->head->chunk = list->head->next->chunk;
		list->head->next->chunk = tmp;
	}
	if (p)
		write(1, "sa\n", 3);
}

void	list_sb(t_heap *list, int p)
{
	int	tmp;

	if (list != NULL && list->length >= 2)
	{
		tmp = list->head->value;
		list->head->value = list->head->next->value;
		list->head->next->value = tmp;
		tmp = list->head->chunk;
		list->head->chunk = list->head->next->chunk;
		list->head->next->chunk = tmp;
	}
	if (p)
		write(1, "sb\n", 3);
}
