/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:06:18 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:06:18 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		if (start >= (unsigned int)ft_strlen(s) || !(*s) || len == 0)
			return (ft_strdup("\0"));
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!(str))
			return (NULL);
		while (s[start + i] && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (ft_strdup("\0"));
}
