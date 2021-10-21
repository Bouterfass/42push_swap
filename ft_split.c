/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:53 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:05:55 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_word(char const *str, char c)
{
	int	i;
	int	count;
	int	lenstr;

	i = 0;
	lenstr = 0;
	count = 1;
	while (str[i] == c && str[i])
		i++;
	while (str[lenstr])
		lenstr++;
	if (lenstr == 0)
		return (0);
	while (str[i++])
	{
		if (str[i] == c)
			if (i < lenstr - 1 && str[i + 1] != c)
				count++;
	}
	return (count);
}

char	*copy_word(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			str[j] = copy_word(s + i, c);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	str[j] = NULL;
	return (str);
}
