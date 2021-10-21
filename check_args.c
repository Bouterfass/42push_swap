/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:04:49 by youcef            #+#    #+#             */
/*   Updated: 2021/10/18 15:33:21 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_numbers_spaces(char *s)
{	
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '-' && s[i] != '+' && s[i] != ' ' && (s[i] < '0'
				|| s[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

int	get_spaces(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			count++;
			while (str[i] == ' ')
				i++;
		}
		i++;
	}
	return (count);
}

int	check_args(char *str)
{
	long long int	num;
	char			*s;

	s = trimstr(str, " \t\v\f\r");
	if (only_numbers_spaces(str))
	{
		free(s);
		return (1);
	}
	if (get_spaces(s))
		return (split_args(s));
	else
	{
		num = ft_atoi(s);
		free(s);
		if (num > 2147483647 || num < -2147483648)
			return (1);
	}
	return (0);
}
