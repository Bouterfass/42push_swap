/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:48 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:05:49 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ft_atoi(const char *string)
{
	int				neg;
	long long int	res;

	neg = 1;
	res = 0;
	while (*string == ' ' || *string == '\t' || *string == '\v'
		|| *string == '\f' || *string == '\r' || *string == '\n')
		string++;
	if (*string == '-')
		neg = -1;
	if (*string == '-' || *string == '+')
		string++;
	while (*string >= '0' && *string <= '9')
	{
		res = (res * 10) + (*string - 48);
		string++;
	}
	return (res * neg);
}
