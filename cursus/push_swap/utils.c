/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:27:10 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/04 22:54:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **tab_2d)
{
	int i;

	i = 0;
	while (tab_2d[i])
	{
		free(tab_2d[i]);
		i++;
	}
	free(tab_2d);
}

t_node	*mylst_new(int content)
{
	t_node	*ptr;

	ptr = malloc(sizeof(t_node));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
t_node	*mylst_last(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	mylstadd_back(t_node **lst, t_node *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		mylst_last(*lst)->next = new;
	}
}
