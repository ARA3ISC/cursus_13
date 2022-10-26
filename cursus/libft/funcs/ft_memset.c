/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 05:07:14 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:36:17 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > 0)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	int str[] = {1, 2, 3, 4, 5};
	int c = 9;

	memset(str + 2, c, 3 * 4);
	for (size_t k = 0; k < 5; k++)
	{
		printf("%d  ", str[k]);
	}
	return (0);
}*/
