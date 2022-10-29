/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:07:53 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/29 14:30:42 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	fsize;

	i = 0;
	fsize = 0;
	srclen = ft_strlen(src);
	// if (dst == NULL)
	// 	return (srclen);
	dstlen = ft_strlen(dst);
	fsize = srclen + dstlen;
	if (dstsize == 0 || dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (fsize);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src;
// 	char	*dst;

// 	src = "arabi";
// 	dst = "bbu";
// 	printf("ft_strlcat :%zu\n", ft_strlcat(dst, src, 2));
// 	//printf("strlcat    :%zu\n", strlcat(dst, src, 2));
// 	//printf("%s\n", dst);
// 	return (0);
// }
