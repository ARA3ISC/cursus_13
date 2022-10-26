/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:08:12 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:37:57 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char src[] = "coucou";
	char dest[10] = "A";

	printf("%zu\n", ft_strlcpy(dest, src, 0));
	printf("%s", dest);
	//printf("des : %s    %zu\n",dest, strlcpy(dest, src, 0));
	return (0);
}*/
