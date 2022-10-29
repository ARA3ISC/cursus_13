/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:12:55 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/27 14:48:16 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int	str[];

// 	str[] = {1, 2, 3, 4, 5};
// 	bzero(str, 5);
// 	for (int k = 0; k < 5; k++)
// 		printf("%d ", str[k]);
// }
