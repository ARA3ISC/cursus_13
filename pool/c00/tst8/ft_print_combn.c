/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:46:29 by maneddam          #+#    #+#             */
/*   Updated: 2022/08/25 18:49:01 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		switch(n)
		{
			case 3:
				while ( n > 0 || n < 10)
				{
					ft_putchar (n + '0');
					n++;
				}
				break;
		}
	}
}

int main(void)
{
	ft_print_combn(1);
}
