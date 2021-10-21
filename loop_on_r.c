/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_on_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:11 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:07:12 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	loop_on_r(void (*pf)(t_heap *), t_heap *list, int it)
{
	int	i;

	i = -1;
	while (++i < it)
	{
		(*pf)(list);
	}
}
