/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:39:37 by maneddam          #+#    #+#             */
/*   Updated: 2022/09/01 20:35:30 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_check_alphanum(char str, int *j)
{
	if (str < 48 || (str > 57 && str < 65))
	{
		*j = 1;
	}
	if ((str > 90 && str < 97) || str > 122)
	{
		*j = 1;
	}
}

void	check_is_lower(char *k)
{
	if (*k >= 97 && *k <= 122)
	{
		*k = *k - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		if (j == 1 || i == 0)
		{
			check_is_lower(str + i);
			j = 0;
		}
		else
		{
			if (*(str + i) >= 65 && *(str + i) <= 90)
			{
				*(str + i) = *(str + i) + 32;
			}
		}
		ft_check_alphanum(*(str + i), &j);
		i++;
	}
	return (str);
}
