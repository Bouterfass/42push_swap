/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:14 by youcef            #+#    #+#             */
/*   Updated: 2021/10/18 12:41:36 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_split_args(char *str, t_heap *l)
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
		list_append(l, num);
	}
	free_str(s, words);
}

void	retrieve_data(char *str, t_heap *l)
{
	char	*s;

	s = trimstr(str, " \t\v\f\r");
	if (only_numbers_spaces(s))
		return ;
	if (get_spaces(s))
		append_split_args(s, l);
	else
		list_append(l, ft_atoi(s));
	free(s);
}

int	main(int ac, char **av)
{
	t_ps	*p;
	int		i;
	t_node	*n;

	i = 0;
	p = (t_ps *)malloc(sizeof(t_ps));
	if (!p)
		return (0);
	init_ps(p);
	n = p->la->head;
	if (ac == 1)
		error_handler(p, 0);
	while (++i < ac)
	{
		if (check_args(av[i]))
			error_handler(p, 1);
		else
			retrieve_data(av[i], p->la);
	}
	if (duplicates(p->la) == 1)
		error_handler(p, 1);
	algo(p, n);
	free(n);
	return (0);
}
