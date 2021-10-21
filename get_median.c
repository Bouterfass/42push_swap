/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:06:25 by youcef            #+#    #+#             */
/*   Updated: 2021/10/17 18:06:26 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	median(int *arr, int len)
{
	int	i;
	int	j;
	int	med;

	i = 0;
	j = 0;
	while (i < (len - 1))
	{
		while (j < (len - i - 1))
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		j = 0;
		i++;
	}
	med = arr[len / 2];
	free(arr);
	return (med);
}

int	fill_array(t_heap *l, int len, int chunk)
{
	int	*arr;
	int	med;
	int	i;

	l->c = l->head;
	i = 0;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	while (l->c)
	{
		if (l->c->chunk == chunk)
		{
			arr[i] = l->c->value;
			i++;
		}
		l->c = l->c->next;
	}
	med = median(arr, len);
	return (med);
}

int	get_median(t_heap *list, t_node *tmp, int chunk)
{
	int	chunk_len;

	chunk_len = chunk_length(tmp, chunk);
	return (fill_array(list, chunk_len, chunk));
}
