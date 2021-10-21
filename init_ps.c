/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:06:37 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:37:04 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_ps(t_ps *ps)
{
	ps->la = (t_heap *)malloc(sizeof(t_heap));
	ps->lb = (t_heap *)malloc(sizeof(t_heap));
	if (ps->la != NULL)
	{
		ps->la->length = 0;
		ps->la->head = NULL;
		ps->la->tail = NULL;
		ps->la->c = NULL;
	}
	if (ps->lb != NULL)
	{
		ps->lb->length = 0;
		ps->lb->head = NULL;
		ps->lb->tail = NULL;
		ps->lb->c = NULL;
	}
}
