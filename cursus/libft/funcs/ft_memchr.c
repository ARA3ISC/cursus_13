/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:36:10 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/26 11:18:14 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "arabis\0co@gmail.com";
	char c = '@';
	printf("%s\n", strchr(str, c));
	printf("%s", memchr(str, c, 18));

	return (0);
}*/
