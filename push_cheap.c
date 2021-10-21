/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cheap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:25:58 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 15:27:10 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_cheap(t_ps *ps, int cheap)
{
	size_t	distc;

	distc = dist(ps->la, cheap);
	if (distc <= (ps->la->length / 2))
		lift_up_a(ps, distc);
	else
		lift_down_a(ps, ps->la->length - distc);
}
