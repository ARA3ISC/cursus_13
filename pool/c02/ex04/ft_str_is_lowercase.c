/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:05:33 by maneddam          #+#    #+#             */
/*   Updated: 2022/08/31 21:29:11 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 97) || str[i] > 122)
		{
			is_lowercase = 0;
		}
		i++;
	}
	return (is_lowercase);
}
