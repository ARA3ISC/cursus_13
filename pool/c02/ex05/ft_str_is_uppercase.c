/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:21:51 by maneddam          #+#    #+#             */
/*   Updated: 2022/08/31 21:31:48 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	i = 0;
	is_uppercase = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 65) || str[i] > 90)
		{
			is_uppercase = 0;
		}
		i++;
	}
	return (is_uppercase);
}
