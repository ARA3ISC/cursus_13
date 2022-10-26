/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:47:40 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/05 18:25:07 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	count_sign;

	result = 0;
	count_sign = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			count_sign++;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - 48;
		str++;
	}
	if (count_sign % 2 == 1)
		return (result * -1);
	else
		return (result);
}
/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char str[] = " ---+--+1234ab567";
		printf("my function's result is         : %d\n", ft_atoi(str));
		printf("predefined function's result is : %d", atoi(str));
}*/
