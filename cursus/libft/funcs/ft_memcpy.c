/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:22:38 by maneddam          #+#    #+#             */
/*   Updated: 2022/10/29 14:34:21 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdst;


	psrc = (char *)src;
	pdst = (char *)dst;
	if (dst == src)
		return (dst);

	if (pdst == NULL && psrc == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (pdst);
}
/*#include <stdlib.h>
int	main(void)
{
	char *str ="            ";
	size_t n = 14;
	char *mem = ((void *)0);
	//mem = malloc(sizeof(*mem) * 30);
	ft_memcpy(mem, str, 3);
	printf("%s",mem);


	// printf("memcpy :%s", memcpy(str, str + 2, n));
	return (0);
}*/
