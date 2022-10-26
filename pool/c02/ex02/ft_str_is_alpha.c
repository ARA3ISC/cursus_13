/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:50:36 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/04 14:08:09 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| str[i] >= 123)
		{
			is_alpha = 0;
		}
		i++;
	}
	return (is_alpha);
}
