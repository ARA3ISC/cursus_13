/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 01:37:25 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/11 20:43:51 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 2);
			ft_putchar("0123456789abscef"[str[i] / 16]);
			ft_putchar("0123456789abscef"[str[i] % 16]);
		}
		i++;
	}
}
