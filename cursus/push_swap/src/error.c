/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:22:32 by maneddam          #+#    #+#             */
/*   Updated: 2023/01/07 13:18:14 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(char *msg)
{
	ft_printf("%s\n", msg);
	exit(1);
}

void	check_duplicate(char	**tab2d)
{
	int i;
	int j;
	int n1;
	int n2;


	i = 0;
	while (tab2d[i])
	{
		if (!tab2d[i][0])
			print_error("Error");
		n1 =  ft_atoi(tab2d[i]);
		j = i + 1;
		while (tab2d[j])
		{
			n2 =  ft_atoi(tab2d[j]);
			if (n1 == n2)
				print_error("Error");
			j++;
		}
		i++;
	}
}

void	check_arg(char *one_arg, char **tab2d)
{
	int	i;

	i = 0;
	while (one_arg[i])
	{
		if (!(one_arg[i] >= '0' && one_arg[i] <= '9') && one_arg[i] != 32 && one_arg[i] != '-' && one_arg[i] != '+')
			print_error("Error");

		i++;
	}

	check_duplicate(tab2d);
}
