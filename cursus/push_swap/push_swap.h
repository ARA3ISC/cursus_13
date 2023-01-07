/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:02:59 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/07 21:08:33 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"
# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_node
{
	int content;
	struct s_node	*next;
}		t_node;

typedef struct s_args
{
	char	**tab2d;
	char	*one_arg;
}		t_args;

void	print_error(char *msg);
void	ft_free(char **tab_2d);

t_node		*mylst_new(int	content);
void		mylstadd_back(t_node **lst, t_node *new);
t_node		*mylst_last(t_node *lst);
void		mylstadd_front(t_node **lst, t_node *new);

void		check_arg(char *one_arg, char	**tab2d);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
long		int	ft_atoi(const char *str);

void		swap(t_node **st_a, t_node **st_b, char c);
void		push(t_node **st_a, t_node **st_b, char c);
void		rotate(t_node **st_a, t_node **st_b, char c);

int			count_args(t_node	*stack_a);
void		sort_three(t_node **stack_a, t_node **stack_b);

#endif
