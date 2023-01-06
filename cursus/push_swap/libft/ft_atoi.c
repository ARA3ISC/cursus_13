/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:01:31 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/06 16:06:18 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

// static int	check_of(int sign)
// {
// 	if (sign == -1)
// 		exit(1);
// 	return (-1);
// }

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		if ((nb * 10 + str[i] - 48 < nb) && (isneg == 1))
			print_error("invalid num");
		if ((nb * 10 + str[i] - 48 + 1 < nb) && (isneg == -1))
			print_error("invalid num");
		nb = nb * 10 + str[i] - 48;
		i++;
	}

	// printf("   %ld   ", nb);
	return (nb * isneg);
}
