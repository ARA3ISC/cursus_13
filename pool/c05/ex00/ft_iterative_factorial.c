/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:39:39 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/10 09:08:02 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	if (nb > 0)
	{
		i = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (fact);
}
/*#include<stdio.h>
int main()
{
	int number = 7;
	printf("%d", ft_iterative_factorial(number));
}*/
