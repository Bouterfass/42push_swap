/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:32 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:48:14 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_heap(t_heap *l)
{
	t_node	*tmp;
	t_node	*n;

	if (l->head)
	{
		tmp = l->head;
		n = l->head->next;
		while (n)
		{
			free(tmp);
			tmp = n;
			n = n->next;
		}
		free(tmp);
	}
	free(l);
}

void	error_handler(t_ps *ps, int i)
{
	if (ps->la->c)
		free(ps->la->c);
	if (ps->lb->c)
		free(ps->lb->c);
	if (ps->la)
		free_heap(ps->la);
	if (ps->lb)
		free_heap(ps->lb);
	if (ps)
		free(ps);
	if (i)
		write(1, "Error\n", 6);
	exit(1);
}

void	free_all(t_ps *ps)
{
	if (ps->la)
		free_heap(ps->la);
	if (ps->lb)
		free_heap(ps->lb);
	free(ps);
}
