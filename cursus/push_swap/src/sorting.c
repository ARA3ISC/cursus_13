/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:40:15 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/07 21:14:33 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_args(t_node	*stack_a)
{
	int count;

	count = 0;
	while (stack_a != NULL)
	{
		count++;
		stack_a = stack_a->next;
	}
	return count;
}

void	sort_three(t_node **stack_a, t_node **stack_b)
{
	(void)stack_b;
	int	tmp;
	while ((*stack_a)->next != NULL)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
		{
			tmp = (*stack_a)->content;
			(*stack_a)->content = (*stack_a)->next->content;
			(*stack_a)->next->content = tmp;
		}
		*stack_a = (*stack_a)->next;
	}
}
