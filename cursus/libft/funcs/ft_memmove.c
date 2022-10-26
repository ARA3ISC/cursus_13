/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:01:46 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/23 16:36:08 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

// int main()
// {	char str[] = "ABCDEFGHIJKL";

// 	printf("ft_memmove :%s\n", ft_memmove(str + 5, str, 3));
// 	//printf("memmove :%s\n", memmove(str + 5, str, 3));
// 	return (0);
// }
