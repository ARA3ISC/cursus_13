/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:53:17 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/12 15:42:48 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}	
	return (0);
}
/*#include<stdio.h>
int main()
{
	printf("%d", ft_iterative_power(3, 4));
	return 0;
}*/
