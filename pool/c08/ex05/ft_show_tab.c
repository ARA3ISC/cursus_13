/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:31:21 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/14 11:35:34 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	int		i;

	i = 0;
	while (ptr[i].str)
	{
		putstr(ptr[i].str);
		putnbr(ptr[i].size);
		ft_putchar('\n');
		putstr(ptr[i].copy);
		i++;
	}
}
