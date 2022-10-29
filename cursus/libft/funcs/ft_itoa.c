/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:28:40 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/27 10:42:23 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numb_size(long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		else if (nb < 0)
			nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*check_num(long nbr, char *ptr, int len, int i)
{
	if (nbr == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	else if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		ptr[i - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		i--;
	}
	ptr[len] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*ptr;
	int		len;
	int		i;

	nbr = n;
	len = numb_size(nbr);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	i = len;
	return (check_num(nbr, ptr, len, i));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s", ft_itoa(456));
// 	return (0);
// }
