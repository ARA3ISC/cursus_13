/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:26:00 by maneddam          #+#    #+#             */
/*   Updated: 2022/11/04 05:43:34 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u_dec(unsigned int n, char *base)
{
	int i;
	unsigned long len;


	len = ft_strlen(base);
	i = 0;
	if (n > 9)
	{
		i += ft_putnbr_u_dec(n / len, base);
		i += ft_putnbr_u_dec(n % len, base);
	}
	else
	{
		i += ft_putchar((base[n]));
		// "0123456789"[2]
	}
	return(i);
}
// int main(int argc, char const *argv[])
// {
// 	adress(main,"0123456789abcdef");
// 	printf("\n%p\n",main);
// 	return 0;
// }

