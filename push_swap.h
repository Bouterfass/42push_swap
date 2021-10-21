/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcef <youcef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:07:35 by youcef            #+#    #+#             */
/*   Updated: 2021/10/21 16:44:40 by youcef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

typedef struct node
{
	int			value;
	int			chunk;
	struct node	*next;
}	t_node;

typedef struct heap
{
	size_t		length;
	struct node	*head;
	struct node	*tail;
	struct node	*c;
}	t_heap;

typedef struct ps
{
	char	*args;
	int		min;
	int		max;
	int		med;
	t_heap	*la;
	t_heap	*lb;
}	t_ps;

int				check_args(char *str);
char			*trimstr(const char *s1, const char *set);
void			init_ps(t_ps *ps);
int				ft_strlen(const char *s1);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strdup(const char *s);
int				ft_strlen2(const char *s);
int				get_spaces(char *str);
int				parse_args(t_ps *ps);
char			**ft_split(char const *s, char c);
int				count_word(char const *str, char c);
void			list_append(t_heap *list, int val);
long long int	ft_atoi(const char *string);
int				fill_heap(char *args, t_heap *l);
void			print_lists(t_node *tmpa, t_node *tmpb);
int				get_diff(t_heap *lista, t_heap *listb);
void			algo(t_ps *ps, t_node *tmp);
void			list_pa(t_heap *receiver, t_heap *sender);
void			list_pb(t_heap *receiver, t_heap *sender);
void			list_ra(t_heap *list);
void			list_rb(t_heap *list);
void			append_front(t_heap *list, t_node *n);
void			list_rra(t_heap *list);
void			list_rrb(t_heap *list);
void			list_sa(t_heap *list, int p);
void			list_sb(t_heap *list, int p);
void			add_node(t_heap *receiver, t_node *n);
int				is_sorted(t_heap *list);
void			loop_on_r(void (*pf)(t_heap *), t_heap *list, int it);
void			loop_on_p(void (*pf)(t_heap *, t_heap *),
					t_heap *la, t_heap *l, int i);
int				get_median(t_heap *list, t_node *tmp, int chunk);
int				max_chunk(t_heap *l);
int				move_to_b(t_ps *ps, int chunk);
int				dist(t_heap *l, int value);
int				move_to_a(t_ps *ps, int chunk);
int				is_sorted(t_heap *list);
int				chunk_length(t_node *tmp, int chunk);
void			print_lb(t_heap *lb);
void			error_handler(t_ps *ps, int i);
void			sort(t_heap *l);
int				is_rsorted(t_heap *list);
void			free_all(t_ps *ps);
void			update_chunk_a(t_heap *l, int med, int *gchunk, int maxchunk);
void			update_chunk_b(t_heap *l, int med, int *gchunk, int maxchunk);
int				duplicates(t_heap *l);
int				split_args(char *str);
int				only_numbers_spaces(char *s);
void			free_str(char **str, int words);
void			quick_sort(t_ps *ps, t_node *tmp);
void			insert_sort(t_ps *ps);
t_heap			*new_list(void);
t_heap			*copy_list(t_heap *a);
void			bubble_sort(t_heap *a, int swapped);
void			free_heap(t_heap *l);
void			lift_up_a(t_ps *ps, int it);
void			lift_down_a(t_ps *ps, int it);
void			lift_up_b(t_ps *ps, int it);
void			lift_down_b(t_ps *ps, int it);
void			ra_insert(t_heap *l, int p);
void			rb_insert(t_heap *l, int p);
void			rr_insert(t_heap *la, t_heap *lb);
void			rra_insert(t_heap *l, int p);
void			rrb_insert(t_heap *l, int p);
void			rrr_insert(t_heap *la, t_heap *lb);
void			push_to_a(t_ps *ps);
int				min_chunk(t_heap *l);
void			push_cheap(t_ps *ps, int cheap);

#endif