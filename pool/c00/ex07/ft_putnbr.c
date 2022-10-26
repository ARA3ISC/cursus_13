/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:48:55 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/04 20:21:14 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int	nb2;
	int	sineg;

	nb2 = nb;
	if (nb2 == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147493648);
	}
	else if (nb2 >= 0 && nb2 < 10)
	{
		ft_putchar (nb2 + '0');
	}
	else if (nb2 < 0)
	{
		ft_putchar ('-');
		sineg = -nb2;
		ft_putnbr (sineg);
	}
	else
	{
		ft_putnbr (nb2 / 10);
		ft_putnbr (nb2 % 10);
	}
}
int main()
{
	ft_putnbr(-0);
}
