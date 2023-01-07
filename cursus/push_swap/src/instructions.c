/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:34:14 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/07 20:37:27 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node **st_a, t_node **st_b, char c)
{
	int	tmp;

	if (c == 'a')
	{
		tmp = (*st_a)->content;
		(*st_a)->content = (*st_a)->next->content;
		(*st_a)->next->content = tmp;
		ft_putstr("sa");
	}
	else if (c == 'b')
	{
		tmp = (*st_b)->content;
		(*st_b)->content = (*st_b)->next->content;
		(*st_b)->next->content = tmp;
		ft_putstr("sb");
	}
	else if (c == 's')
	{
		tmp = (*st_a)->content;
		(*st_a)->content = (*st_a)->next->content;
		(*st_a)->next->content = tmp;
		tmp = (*st_b)->content;
		(*st_b)->content = (*st_b)->next->content;
		(*st_b)->next->content = tmp;
		ft_putstr("ss");
	}
}

void	push(t_node **st_a, t_node **st_b, char c)
{
	if (c == 'a' && (*st_b) != NULL)
		mylstadd_front(st_a, *st_b);

	else if (c == 'b' && (*st_a) != NULL)
		mylstadd_front(st_a, *st_b);
}

void	rotate(t_node **st_a, t_node **st_b, char c)
{
	t_node *head;
	t_node *tmp;

	if (c == 'a')
	{
		head = (*st_a);
		tmp = head;
		while (head->next != NULL)
			head = head->next;
		head->next = tmp;
		(*st_a) = (*st_a)->next;
		tmp->next = NULL;
	}
	else if (c == 'b')
	{
		head = (*st_b);
		tmp = head;
		while (head->next != NULL)
			head = head->next;
		head->next = tmp;
		(*st_b) = (*st_b)->next;
		tmp->next = NULL;
	}
	else
	{
		rotate(st_a, st_b, 'a');
		rotate(st_a, st_b, 'b');
	}
}
