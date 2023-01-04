/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:02:59 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/04 22:54:17 by maneddam         ###   ########.fr       */
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


void	print_error(char *msg);
void	ft_free(char **tab_2d);

t_node		*mylst_new(int	content);
void		mylstadd_back(t_node **lst, t_node *new);
t_node		*mylst_last(t_node *lst);
#endif
