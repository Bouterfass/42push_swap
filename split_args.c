/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:50 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 17:36:03 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_args(char *str)
{
	char			**s;
	int				i;
	int				words;
	long long int	num;

	s = ft_split(str, ' ');
	words = count_word(str, ' ');
	i = -1;
	while (++i < words)
	{
		num = ft_atoi(s[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			free(str);
			free_str(s, words);
			return (1);
		}
	}
	free(str);
	free_str(s, words);
	return (0);
}
