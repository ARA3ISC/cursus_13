/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:04:11 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/10 15:41:06 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1 || nb == 0)
		return (nb);
	else
	{
		i = 1;
		while (i <= nb / i)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*int	main()
{
    printf("%d\n",ft_sqrt(25));
    printf("%d\n",ft_sqrt(9));
    printf("%d\n",ft_sqrt(100));
    printf("%d\n",ft_sqrt(2147483647));
    return 0;
}*/
