/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:06:17 by maneddam          #+#    #+#             */
/*   Updated: 2022/08/31 21:11:50 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	is_num = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 && str[i] > 0) || str[i] > 57)
		{
			is_num = 0;
		}
		i++;
	}
	return (is_num);
}
